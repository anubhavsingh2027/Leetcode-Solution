class Solution {
public:
    bool checkValidString(string s) {
        int min=0,Max=0;
        for(char c:s){
            if(c=='('){
                min++;
                Max++;
            }
            else if(c==')'){
                min--;
                Max--;
            }
            else{
                min--;
                Max++;
            }
            if(Max<0)return false;
            min=max(min,0);
            }
return min==0;
        }
};