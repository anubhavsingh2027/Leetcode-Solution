class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if((m*n)!=(r*c))return mat;
        vector<vector<int>>ans(r,vector<int>(c,0));
        int i2=0,j2=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            if((c-1)<j2){
                j2%=c;
                i2++;
            }
            
            ans[i2][j2]=mat[i][j];
            j2++;
            }
        }
        return ans;
    }
};