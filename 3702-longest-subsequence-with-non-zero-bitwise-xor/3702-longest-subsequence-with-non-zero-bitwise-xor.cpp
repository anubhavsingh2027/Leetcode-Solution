class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int  n=nums.size();
       int sum=0;
       int zeroCount=0;
       for(int val:nums){
        sum^=val;
        if(val==0)zeroCount++;
       }
       return sum==0?zeroCount==n?0:n-1:n;
    }
};