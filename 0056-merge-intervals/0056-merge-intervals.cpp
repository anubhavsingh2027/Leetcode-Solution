class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        ans.push_back(arr[0]);
        for(int i=1;i<arr.size();i++){
            int start=arr[i][0];
            int end=arr[i][1];
            int prevFirst=ans.back()[0];
            int prevEnd=ans.back()[1];
            if(prevEnd>=start ){
                ans.pop_back();
                int maxi=max(end,prevEnd);
                ans.push_back({prevFirst,maxi});
            }else{
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};