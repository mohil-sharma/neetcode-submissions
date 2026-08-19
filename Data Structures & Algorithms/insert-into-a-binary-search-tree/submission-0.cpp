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
    TreeNode* insert(TreeNode* temp, int value){
        TreeNode* a;
        TreeNode* b;
        if(temp==NULL){
            return NULL;
        }
        else if(value<temp->val){
            a=insert(temp->left,value);
            if(a==NULL){
                TreeNode* c=new TreeNode(value);
                temp->left=c;
            }
        }
        else if(value>temp->val){
            b=insert(temp->right,value);
            if(b==NULL){
                TreeNode* c=new TreeNode(value);
                temp->right=c;
            }
        }
        return temp;

    }
    TreeNode* insertIntoBST(TreeNode* root, int value) {
        if(root==NULL){
            TreeNode* c=new TreeNode(value);
            root=c;
            return root;
        }
        return insert(root,value);
    }
};