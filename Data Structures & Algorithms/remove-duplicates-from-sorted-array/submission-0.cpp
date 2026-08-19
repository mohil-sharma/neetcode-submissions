class Solution {
   public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        vector<int> ans;
        s.insert(nums[0]);
        ans.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            
            if (s.find(nums[i]) != s.end()) {
                continue;
            }
            s.insert(nums[i]);
            ans.push_back(nums[i]);
        }
        nums = ans;
        return ans.size();
    }
};