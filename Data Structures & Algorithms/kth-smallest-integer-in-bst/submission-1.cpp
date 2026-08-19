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
    void helper(TreeNode* temp,vector<int>& v){
        if(temp==NULL){
            return;
        }
        helper(temp->left,v);
        v.push_back(temp->val);
        helper(temp->right,v);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        helper(root,v);

        return v[k-1];
    }
};