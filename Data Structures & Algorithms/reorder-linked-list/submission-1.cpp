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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return;
        }
        ListNode* a=head;
        ListNode* b=head;

        ListNode* temp=head;
        int total=0;
        int count;


        //just counting
        while(temp!=NULL){
            total++;
            temp=temp->next;
        }

        //divide the list in 2
        count=total;
        temp=head;
        ListNode* curr=temp->next;

        while(count>((total/2)+1)){
            count--;
            temp=temp->next;
            curr=curr->next;
        }

        temp->next=NULL;
        
        //reverse the 2nd list
        ListNode* left=NULL;
        ListNode* right=curr->next;
        while(curr!=NULL){
            curr->next=left;
            left=curr;
            curr=right;
            if(curr!=NULL){
                right=right->next;
            }
            else{
                break;
            }
        }

        //correct
        //now connect
        a=head;
        b=left;
        temp=a;
        while(a!=NULL && b!=NULL){
            a=a->next;
            temp->next=b;
            temp=temp->next;

            b=b->next;
            temp->next=a;
            temp=temp->next;
        }

    }
};
