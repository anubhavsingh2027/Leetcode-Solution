class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i0=0,j1=0,k2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)i0++;
            if(nums[i]==1)j1++;
            if(nums[i]==2)k2++;
        }
        for(int i=0;i<nums.size();i++){
            if(i0!=0){
                nums[i]=0;
                i0--;
            }
            else if(j1!=0){
                nums[i]=1;
                j1--;
            }
            else{
                nums[i]=2;
                k2--;
            }
        }
    }
};