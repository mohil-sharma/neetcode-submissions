class Solution {
   public:
    bool isNStraightHand(vector<int>& nums, int groupSize) {
        if (nums.size() % groupSize != 0) {
            return false;
        }

        sort(nums.begin(), nums.end());
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (mp[nums[i]] == 0) {
                continue;
            }
            mp[nums[i]]--;
            int curr = nums[i];
            int count = 1;

            while (count < groupSize) {
                curr++;
                if (mp[curr] == 0) {
                    return false;
                }

                mp[curr]--;
                count++;
            }
        }

        return true;
    }
};