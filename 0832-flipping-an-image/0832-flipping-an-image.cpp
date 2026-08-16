class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){
            int l=0,r=image[i].size()-1;
            while(l<=r){
                if(image[i][l]==0 && image[i][r]==0){
                    image[i][l]=1;
                    image[i][r]=1;
                }
                else if(image[i][l]==1 && image[i][r]==1){
                    image[i][l]=0;
                    image[i][r]=0;
                }
                l++;
                r--;
            }
        }
        return image;
    }
};