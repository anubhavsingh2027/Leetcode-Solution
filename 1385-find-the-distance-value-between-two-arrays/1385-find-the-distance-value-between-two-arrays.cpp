class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
       int count=0;
       for(int val:arr1){
        bool valid=true;
        for(int val2:arr2){
            if(abs(val-val2)<=d){
                valid=false;
                break;
            }
        }
        if(valid){
            count++;
        }
       } 
       return count;
    }
};