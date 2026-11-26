class Solution {
public:
    bool canAliceWin(int n) {
        bool ans=false;
        int curr=10;
        while(n>=0){
            n-=curr;
            if(n>=0){
                ans=ans?false:true;
                curr--;
            }
        }
        return ans;
    }
};
