class Solution {
    void buildLcs(string s1,string s2,vector<vector<int>>&dp){
        int n=s1.size();
        int m=s2.size();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
    }
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int n=str1.size();
        int m=str2.size();
        vector<vector<int>>dp(1005,vector<int>(1005,0));
        buildLcs(str1,str2,dp);

        //common part
        int i=n;
        int j=m;
        string ans="";
        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){
                ans+=str1[i-1];
                i--;
                j--;
            }
            else if(dp[i-1][j]>dp[i][j-1]){
                ans+=str1[i-1];
                i--;
            }
            else{
                ans+=str2[j-1];
                j--;
            }
        }
            //left characters

            while(i>0){
                ans+=str1[i-1];
                i--;
            }
            while(j>0){
                ans+=str2[j-1];
                j--;
            }
             reverse(ans.begin(), ans.end());
        return ans;
    }
};