class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int max1=0;
        int curr=0;
        for(int i=nums.size()-1;i>=0;i--){
            for(int j=i;j>=0;j--){
                if(nums[i]>nums[j]){
                    max1=max(max1,nums[i]-nums[j]);
                }
            }
        }
        return max1;
    }
};
