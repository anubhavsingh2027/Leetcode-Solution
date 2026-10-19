class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
    
    int count =0;
     for(int i=1;i<target;i++){
        if(mp.find(i)!=mp.end()){
            count+=mp[i].size();
        }
    }
    vector<int>ans;
    for(int i=0;i<mp[target].size();i++){
        ans.push_back(count++);
    }
    return ans;
    }
};