class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int a=0,b=0,c=0;
        for(int val:stones){
            if(val%3==0)a++;
            else if(val%3==1)b++;
            else c++;
        }
        if(a%2==0)return b>0 && c>0;
        return abs(b-c)>2;
    }
};