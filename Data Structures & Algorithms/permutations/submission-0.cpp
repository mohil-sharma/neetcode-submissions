class Solution {
   public:
    void helper(vector<int> nums, vector<vector<int>>& ans, int i, int c) {
        if (i == nums.size() - 1) {
            ans.push_back(nums);
            return;
        }
        for (int c = i; c < nums.size(); c++) {
            swap(nums[i], nums[c]);
            helper(nums, ans, i + 1, c);
            swap(nums[i], nums[c]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;

        helper(nums, ans, 0, 0);

        return ans;
    }
};
