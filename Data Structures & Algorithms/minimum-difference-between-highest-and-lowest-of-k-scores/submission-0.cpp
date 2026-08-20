class Solution {
   public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int i = 0;
        int j = k-1;
        int min1 = INT_MAX;

        while (j < nums.size()) {
            if ((j-i+1) > k) {
                i++;
            }
            min1 = min(nums[j] - nums[i], min1);
            j++;
        }

        return min1;
    }
};