class Solution {
public:
    int climbStairs(int n) {
     vector<int>dp(50,-1);
     dp[1]=1;
     dp[2]=2;
     for(int i=3;i<46;i++){
        dp[i]=dp[i-1]+dp[i-2];
     }   
     return dp[n];
    }
};

// class Solution {
// int solve(int n,vector<int>&dp){
//     if(n<1)return 0;
//     if(n==1)return 1;
//     if(n==2)return 2;
//     if(dp[n]!=-1)return dp[n];
//     return dp[n]=solve(n-1,dp)+solve(n-2,dp);
// }
// public:
//     int climbStairs(int n) {
//         vector<int>dp(50,-1);
//        return solve(n,dp); 
//     }
// };