class Solution {
public:
    int maxSatisfaction(vector<int>& sat) {
        int result=0;
        int sum=0;
        sort(sat.begin(),sat.end());
        for( int i=sat.size()-1;i>=0;i--){
            sum+=sat[i];
            if(sum>0){
                result+=sum;
            }else break;
        }
        return result;
    }
};