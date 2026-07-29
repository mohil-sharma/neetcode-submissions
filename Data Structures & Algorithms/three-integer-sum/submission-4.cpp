class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        int target = 0;
        int remaining;
        int r;
        int w;

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0) {
                if (nums[i] == nums[i - 1]) {
                    continue;
                }
            }
            remaining = target - nums[i];
            r = i + 1;
            w = nums.size() - 1;
            while (r < w) {
                if ((nums[r] + nums[w]) == remaining) {
                    v.push_back({nums[i], nums[r], nums[w]});
                    r++;
                    w--;
                    while (r < w && nums[r] == nums[r - 1]) r++;

                    while (r < w && nums[w] == nums[w + 1]) w--;

                } else if ((nums[r] + nums[w]) > remaining) {
                    w--;
                } else {
                    r++;
                }
            }
        }
        return v;
    }
};
