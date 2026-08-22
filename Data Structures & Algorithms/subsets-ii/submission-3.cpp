class Solution {
   public:
    void helper(vector<int>& nums, int i, vector<int>& temp, vector<vector<int>>& ans) {
        if (i == nums.size()) {
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[i]);

        

        helper(nums, i + 1, temp, ans);
        temp.pop_back();
        int j = i;
        while (j < nums.size() && nums[j] == nums[i]) {
            j++;
        }
        helper(nums, j, temp, ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        set<vector<int>> v;

        sort(nums.begin(), nums.end());
        helper(nums, 0, temp, ans);

        return ans;
    }
};
