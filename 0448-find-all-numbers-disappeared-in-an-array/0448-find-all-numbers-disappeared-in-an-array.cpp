class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n=nums.size();
    vector<int>t(n,-1);
    for(int i=0;i<n;i++){
        t[nums[i]-1]=nums[i];
    }  
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(t[i]==-1){
            ans.push_back(i+1);
        }
    }
    return ans;
    }
};