class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int mod=1e9+7;
        int odd=0,even=1,pre=0,ans=0;
        for(int val:arr){
            pre+=val;
            if(pre%2==1){
                ans=(ans+even)%mod;
                odd++;
            }
            else{
                ans=(ans+odd)%mod;
                even++;
                }
        }
        return ans;
    }
};