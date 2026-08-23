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
    bool helper(TreeNode* root, int t,int curr){
        if(root==NULL){
            return false;
        }
        curr=curr+ root->val;

        if(curr==t && root->left==NULL && root->right==NULL){
            return true;
        }

        return helper(root->left,t,curr) || helper(root->right,t,curr);

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return false;
        }

        return helper(root,targetSum,0);
    }
};