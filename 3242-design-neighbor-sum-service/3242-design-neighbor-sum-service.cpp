class NeighborSum {
    vector<vector<int>>arr;
public:
    NeighborSum(vector<vector<int>>& grid) {
        arr=grid;
    }
    
    int adjacentSum(int value) {
        int n=arr.size();
        int m=arr[0].size();
        int iTh=0,jTh=0;
        for( int i=0;i<n;i++){
            for( int j=0;j<m;j++){
                if(arr[i][j]==value){
                    iTh=i;
                    jTh=j;
                }
            }
        }

    int sum=0;
    if(iTh-1>=0) sum+=arr[iTh-1][jTh];
    if(iTh+1<n) sum+=arr[iTh+1][jTh];
    if(jTh-1>=0) sum+=arr[iTh][jTh-1];
    if(jTh+1<n) sum+=arr[iTh][jTh+1];
    return sum;


    }
    
    int diagonalSum(int value) {
        int n=arr.size();
        int m=arr[0].size();
        int iTh=0,jTh=0;
        for( int i=0;i<n;i++){
            for( int j=0;j<m;j++){
                if(arr[i][j]==value){
                    iTh=i;
                    jTh=j;
                }
            }
        }

    int sum=0;
    if(iTh-1>=0 && jTh-1>=0 ) sum+=arr[iTh-1][jTh-1];
    if(iTh-1>=0 && jTh+1<m) sum+=arr[iTh-1][jTh+1];
    if( iTh+1<n && jTh-1>=0 ) sum+=arr[iTh+1][jTh-1];
    if( iTh+1<n && jTh+1<m ) sum+=arr[iTh+1][jTh+1];
    return sum;
    }
};

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */