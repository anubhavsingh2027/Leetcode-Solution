class Solution {
public:
void helper(vector<int>&nums,vector<int>&curr,vector<vector<int>>&res,int indx){
    res.push_back(curr);  
    for(int i=indx;i<nums.size();i++){
        curr.push_back(nums[i]);
        helper(nums,curr,res,i+1);
        curr.pop_back();
    }
}
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int>current;
        vector<vector<int>>result;
        helper(nums,current,result,0);
        return result; 
    }
};

class Solution_include_exclude {
public:
void helper(vector<int>&nums,vector<int>&curr,vector<vector<int>>&res,int indx){
    if(indx==nums.size()){
        res.push_back(curr);
        return;
    }
    curr.push_back(nums[indx]);
    helper(nums,curr,res,indx+1);//include
    curr.pop_back();
    helper(nums,curr,res,indx+1);//exclude
}
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<int>current;
        vector<vector<int>>result;
        helper(nums,current,result,0);
        return result;
        
    }
};