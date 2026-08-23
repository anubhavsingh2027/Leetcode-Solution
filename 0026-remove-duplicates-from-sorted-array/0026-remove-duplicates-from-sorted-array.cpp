class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int count=0;
       int indx=0;
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        if(!mp[nums[i]]){
            count++;
             mp[nums[i]]++;
            swap(nums[indx++],nums[i]);
            }
    }
    return count;
    }
};