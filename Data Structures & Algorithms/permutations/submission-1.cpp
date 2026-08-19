class Solution {
   public:
    void helper(vector<int> nums, vector<vector<int>>& ans, int i) {
        // permutation completed
        if (i == nums.size()) {
            ans.push_back(nums);
            return;
        }

        // Try every element at position i
        for (int c = i; c < nums.size(); c++) {
            swap(nums[i], nums[c]);  // choose

            helper(nums, ans, i + 1);  // move to next position

            swap(nums[i], nums[c]);  // undo
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;

        helper(nums, ans, 0);

        return ans;
    }
};