class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int val:nums){
            mp[val]++;
        }
        int sum=0;
        for(auto pai:mp){
            if(pai.second==1){
                sum+=pai.first;
            }
        }
        return sum;
    }
};