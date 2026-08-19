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
   
    int height(TreeNode* temp, int count) {
        if (temp == NULL) {
            return -1;
        }
        if (temp->left == NULL && temp->right == NULL) {
            return count;
        }
        return max(height(temp->left, count + 1), height(temp->right, count + 1));
    }
    bool isBalanced(TreeNode* root) {
        bool b=false;
        int count = 0;
        if (root == NULL) {
            return true;
        }
        if (!isBalanced(root->left) || !isBalanced(root->right)) {
            return false;
        }
        
        int left, right;
        left = 1 + height(root->left, count);
        count = 0;
        right = 1 + height(root->right, count);

        

        if (abs(right - left) <= 1) {
            b= true;
        } else {
            b= false;
        }

        return b;
    }
};
