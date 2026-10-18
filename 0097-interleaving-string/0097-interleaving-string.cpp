class Solution {
    bool solve(int i,int j,int k,string s1,string s2,string s3,
    vector<vector<int>>&dp1,vector<vector<int>>&dp2){
       if(k==s3.size())return i==s1.size() && j==s2.size();
        bool taken1=false,taken2=false;
        if(i<s1.size() && s1[i]==s3[k]){
            if(dp1[i][k]!=-1)return dp1[i][k];
            taken1=dp1[i][k]=solve(i+1,j,k+1,s1,s2,s3,dp1,dp2);
        }
        if(j<s2.size() && s2[j]==s3[k]){
             if(dp2[j][k]!=-1)return dp2[j][k];
            taken2=dp2[j][k]=solve(i,j+1,k+1,s1,s2,s3,dp1,dp2);
        }
        return taken1||taken2;;
    }
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size()+s2.size()!=s3.size())return false;
        vector<vector<int>>dp1(105,vector<int>(205,-1));
        vector<vector<int>>dp2(105,vector<int>(205,-1));
        return solve(0,0,0,s1,s2,s3,dp1,dp2);
    }
};