class Solution {
    int curr=0;
    int sum=0;
public:
    int elevatorRequests(int n, vector<int>& req) {
        for(int val:req){
            sum+=(abs(val-curr));
            curr=val;
        }
        return sum;
    }
};