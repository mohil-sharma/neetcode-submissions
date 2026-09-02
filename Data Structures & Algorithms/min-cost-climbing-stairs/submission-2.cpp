class Solution {
public:
    int helper(vector<int>& cost,int i,vector<int>& dp){
        if(i==cost.size()){
            return 0;
        }
        else if(i>cost.size()){
            return INT_MAX;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        
        dp[i]=cost[i]+min(helper(cost,i+1,dp),helper(cost,i+2,dp));

        return dp[i];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp (n+1,-1);
        int a=helper(cost,0,dp);
        int b=helper(cost,1,dp);

        return min(a,b);
    }
};
