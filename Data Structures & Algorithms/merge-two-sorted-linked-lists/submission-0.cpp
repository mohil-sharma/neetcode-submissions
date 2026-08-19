/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
   public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* a = list1;
        ListNode* b = list2;
        ListNode* temp;
        ListNode* ans;

        if(list1==NULL){
            return list2;
        }
        else if(list2==NULL){
            return list1;
        }

        if (a->val <= b->val) {
            ans = a;
            temp=a;
            a=a->next;
        } else {
            ans = b;
            temp=b;
            b=b->next;
        }

        while (a != NULL || b != NULL) {
            if (a == NULL) {
                ans->next = b;
                return temp;
            } else if (b == NULL) {
                ans->next = a;
                return temp;
            }

            if (a->val <= b->val) {
                ans->next = a;
                ans=ans->next;
                a = a->next;
            } else {
                ans->next = b;
                ans=ans->next;
                b = b->next;
            }
        }
        return temp;
    }
};
