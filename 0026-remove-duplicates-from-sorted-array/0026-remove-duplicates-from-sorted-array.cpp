class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int currIndx=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[currIndx]){
                nums[++currIndx]=nums[i];
            }
        }
        return currIndx+1;
    }
};