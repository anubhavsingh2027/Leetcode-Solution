class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int>mp;
        for(int val:nums){
            mp[val]++;
        }
        vector<int>ans;
        while(!mp.empty()){
            vector<int>v;
            for(auto &it:mp){
            ans.push_back(it.first);
            it.second--;
            if(it.second==0){
                v.push_back(it.first);
            }
        }
        for(int val:v){
            mp.erase(val);
        }
        }
        return ans;
    }
};
