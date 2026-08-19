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
    void helper(TreeNode* temp, vector<int>& v, int level, int& count) {
        if (temp == NULL) {
            return;
        }
        else if (temp->left == NULL && temp->right == NULL) {
            if(count<=level){
            v.push_back(temp->val);
            count++;}
            return;
        }
        else if (count<=level) {
            v.push_back(temp->val);
            count++;
        }
        helper(temp->right, v, level + 1, count);
        helper(temp->left, v, level + 1, count);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        int count = 0;

        helper(root, v, 0, count);

        return v;
    }
};
