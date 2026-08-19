/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* temp,priority_queue<int, vector<int> , greater<int>> &pq){
        if(temp==NULL){
            return;
        }
        pq.push(temp->val);
        helper(temp->left,pq);
        helper(temp->right,pq);
    }
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int, vector<int> , greater<int>> pq;
        helper(root,pq);
        int ans;

        for(int i=0;i<k-1;i++){
            pq.pop();
        }
        return pq.top();
    }
};