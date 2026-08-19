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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        //nth node from the end of the list
        ListNode* temp=head;
        int total=0;
        int count;

        while(temp!=NULL){
            total++;
            temp=temp->next;
        }
        count=total-n;
        if(count==0){
            head=head->next;
            return head;
        }

        ListNode* curr=head;
        ListNode* right=curr->next;
        while(count>1 && right!=NULL && right->next!=NULL){
            count--;
            curr=curr->next;
            right=right->next;
        }

        curr->next=right->next;
        right->next=NULL;

        
        return head;

    }
};
