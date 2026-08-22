class Solution {
   public:
    void helper(vector<int>& nums, int i, vector<int>& temp, vector<vector<int>>& ans,
                set<vector<int>>& v) {
        if (i == nums.size()) {
            if (v.find(temp) == v.end()) {
                ans.push_back(temp);
                v.insert(temp);
            }
            return;
        }

        temp.push_back(nums[i]);

        if (v.find(temp) == v.end()) {
            ans.push_back(temp);
            v.insert(temp);
        }

        helper(nums, i + 1, temp, ans, v);
        temp.pop_back();
        helper(nums, i + 1, temp, ans, v);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        set<vector<int>> v;

        sort(nums.begin(), nums.end());
        helper(nums, 0, temp, ans, v);

        return ans;
    }
};
