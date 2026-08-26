class Solution {
public:
    int helper(int n,int count,vector<int>& dp){
        if(count==n){
            return 1;
        }
        if(count>n){
            return 0;
        }
        if(dp[count]!=-1){
            return dp[count];
        }
        dp[count]=helper(n,count+1,dp) + helper(n,count+2,dp);
        return dp[count];
    }

    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        int count=0;
        return helper(n,count,dp);
    }
};
