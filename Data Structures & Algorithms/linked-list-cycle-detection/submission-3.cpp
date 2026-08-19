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
    bool hasCycle(ListNode* head) {
        ListNode* t1 = head;
        ListNode* t2 = head;
        if(t1==NULL){
            return false;
        }

        while (t1->next != NULL) {
            t1 = t1->next;
            if (t2->next == NULL) {
                return false;
            }
            if(t2->next->next==NULL){
                return false;
            }
            t2 = t2->next->next;
            
            if (t1 == t2) {
                return true;
            }
            
        }
        return false;
    }
};
