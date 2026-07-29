class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int profit;
        int min;
        int maxProfit=0;
        int leastSoFar=nums[0];

        for(int i=0;i<n;i++){
            if(leastSoFar<nums[i]){
                profit=nums[i]-leastSoFar;
                if(maxProfit<profit){
                    maxProfit=profit;
                }
            }
            else{
                leastSoFar=nums[i];
            }
        }
        return maxProfit;
    }
};
