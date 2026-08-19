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
    void helper(TreeNode* temp,int level,vector<vector<int>>& v){
        if(temp==NULL){
            return;
        }
        else if(temp->left==NULL && temp->right==NULL){
            v[level].push_back(temp->val);
            return;
        }
        v[level].push_back(temp->val);
        helper(temp->left,level+1,v);
        helper(temp->right,level+1,v);
    }
    int height(TreeNode* temp,int count){
        if(temp==NULL){
            return -1;
        }
        else if(temp->left==NULL && temp->right==NULL){
            return 0;
        }
        return 1+max(height(temp->left,count+1),height(temp->right,count+1));
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        int height1;
        height1=height(root,0);
        vector<vector<int>> v(height1+1);
        int level=0;
        helper(root,level,v);

        return v;
    }
};
