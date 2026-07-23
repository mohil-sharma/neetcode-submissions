class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if ((nums[i] ^ nums[i-1])  == 0) {
                return true;
            } else {
                continue;
            }
        }
        return false;
    }
};