class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int temp=n;
        while(temp>0){
            int val=temp%10;
            sum+=val;
            product*=val;
            temp/=10;
        }
        return n%(sum+product)==0;
    }
};