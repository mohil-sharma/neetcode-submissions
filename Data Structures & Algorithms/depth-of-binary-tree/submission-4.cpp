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
    int helper(TreeNode* temp,int count,int max1){
        if(temp==NULL || (temp->left==NULL && temp->right==NULL)){
            count--;
            return max1;
        }
        count++;
        max1=max(count,max1);
        max1=helper(temp->left,count,max1);
        max1=max(count,max1);
        max1=helper(temp->right,count,max1);
        max1=max(count,max1);

        return max1;
    }
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        if (root->left==NULL && root->right==NULL){
            return 1;
        }
        int max1=INT_MIN;
        int max=helper(root,1,max1);
        return max;
    }
};
