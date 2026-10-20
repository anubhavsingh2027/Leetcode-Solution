class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1;
        int ans=0;
        while(l<r){
            int wid=r-l;
            int high=min(height[l],height[r]);
            int area=wid*high;
            ans=max(ans,area);
            height[l]<height[r]?l++:r--;
        }
        return ans;
    }
};