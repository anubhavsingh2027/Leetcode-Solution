class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, r=height.size()-1,ans=0;
        while(l<r){
            int w=r-l;
            int h=min(height[l],height[r]);
            int area=w*h;
            ans=max(ans,area);
            height[l]<height[r]?l++:r--;
        }
        return ans;
    }
};