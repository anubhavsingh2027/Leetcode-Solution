class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int temp=k;
       unordered_set<int>st;
       for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);
       } 
       while(true){
        if(st.find(k)==st.end()){
            return k;
        }
        k=k+temp;
       }
       return -1;

    }
};