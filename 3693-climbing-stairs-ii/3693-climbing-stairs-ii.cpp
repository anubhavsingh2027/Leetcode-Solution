class Solution {
public:
    int helper(int n,vector<int>&costs,int i,vector<int>&dp){
        if(i==n)return 0;
        if(dp[i]!=-1)return dp[i];
        int m=INT_MAX;
        for(int j=i+1;j<=i+3;j++){
          if(j<=n){
            int cost=costs[j-1]+(j-i)*(j-i)+helper(n,costs,j,dp);
            m=min(m,cost);
            
        }  
        }
        return dp[i]=m;
    }
    int climbStairs(int n, vector<int>& costs) {
        vector<int>dp(n+1,-1);
        return helper(n,costs,0,dp);
    }
};