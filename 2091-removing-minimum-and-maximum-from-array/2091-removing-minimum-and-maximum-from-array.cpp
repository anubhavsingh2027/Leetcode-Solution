class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
      int mini=0;
      int maxi=0;
      for(int i=1;i<nums.size();i++){
        if(nums[i]<nums[mini]){
            mini=i;
        }
        if(nums[i]>nums[maxi]){
            maxi=i;
        }
      }
      if(mini>maxi){
            swap(mini,maxi);
        }
        return min(((n-maxi)+min(mini +1,maxi-mini)), ((mini+1) + min(n-maxi, (maxi - mini))));
    }
};