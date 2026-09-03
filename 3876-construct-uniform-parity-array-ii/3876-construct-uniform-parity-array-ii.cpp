class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minOdd=INT_MAX;
        for(int val:nums1){
            if(val%2==1) minOdd=min(minOdd,val);
        }
        if(minOdd==INT_MAX)return true;
        for(int x:nums1){
            if(x%2==0){
                if(x<=minOdd)return false;
            }
        }
        return true;
    }
};