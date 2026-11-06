/*
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
*/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int>arr(101,0);
        for(int val:nums){
            arr[val]++;
        }
        int sum=0;
        for(int i=1;i<101;i++){
            if(arr[i]==1){
                sum+=i;
            }
        }
        return sum;
    }
};