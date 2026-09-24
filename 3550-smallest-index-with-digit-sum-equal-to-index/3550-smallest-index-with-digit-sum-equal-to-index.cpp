class Solution {
    int digitSum(int val){
        int sum=0;
        while(val>0){
            sum+=val%10;
            val/=10;
        }
        return sum;
    }
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(digitSum(nums[i])==i)return i;
        }
        return -1;
    }
};