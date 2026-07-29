class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int profit;
        int min;
        int maxProfit=0;

        for(int i=0;i<n;i++){
            profit=0;
            min=nums[i];
            for(int j=0;j<i;j++){
                if(min>nums[j]){
                    profit=min-nums[j];
                    if(maxProfit<profit){
                        maxProfit=profit;
                    }
                }
                else if(min<nums[j]){
                    continue;
                }
            }
        }
        return maxProfit;
    }
};
