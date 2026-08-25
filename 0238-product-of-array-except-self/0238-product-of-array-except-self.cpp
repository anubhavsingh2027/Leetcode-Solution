class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count=0;
        int product=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) {
                ++count;
            }
            if(count==1 && nums[i]==0){

            }else{
                product*=nums[i];
            }
        }

        for(int i=0;i<nums.size();i++){
            if(count>=2){
                nums[i]=0;
            }
            else if(count==1){
               if(nums[i]==0){
                nums[i]=product;
               }else{
                nums[i]=0;
               }
            }
            else{
                nums[i]=product/nums[i];
            }
        }
        return nums;
    }
};