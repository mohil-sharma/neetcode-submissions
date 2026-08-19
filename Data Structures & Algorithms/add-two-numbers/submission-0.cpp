/**
 * Definition for singly-linked list.
 * struct ListNode (x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* temp = head;
        ListNode* a = new ListNode(0);
        int x;
        int carry = 0;

        while (l1 != NULL && l2 != NULL) {
            x = (l1->val) + (l2->val) + carry;
            carry = x / 10;
            x = x % 10;
            a = new ListNode(x);
            temp->next = a;
            temp = temp->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        if (l1 == NULL) {
            while (l2 != NULL) {
                x = (l2->val) + carry;
                carry = x / 10;
                x = x % 10;
                a = new ListNode(x);
                temp->next = a;
                temp = temp->next;
                l2 = l2->next;
            }
        } else if (l2 == NULL) {
            while (l1 != NULL) {
                x = (l1->val) + carry;
                carry = x / 10;
                x = x % 10;
                a = new ListNode(x);
                temp->next = a;
                temp = temp->next;
                l1 = l1->next;
            }
        }
        if(carry!=0){
            a=new ListNode(carry);
            temp->next=a;
            temp=temp->next;
        }
        return head->next;
    }
};