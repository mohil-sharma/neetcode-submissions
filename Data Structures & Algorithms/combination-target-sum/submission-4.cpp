class Solution {
   public:
    void help(vector<int>& nums, int target, vector<int>& temp, vector<vector<int>>& ans, int i,int& count) {
        if (count == target) {
            ans.push_back(temp);
            return;
        } else if (count > target) {
            return;
        }

        temp.push_back(nums[i]);
        count = count + nums[i];

        help(nums, target, temp, ans, i, count);
        temp.pop_back();
        count = count - nums[i];

        if (i < nums.size() - 1) {
            help(nums, target, temp, ans, i + 1, count);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> temp;
        vector<vector<int>> ans;
        int count = 0;
        help(nums, target, temp, ans, 0, count);
        return ans;
    }
};
