class Solution {
public:
    bool sumGame(string num) {
        int n=num.size();
       int leftSum=0;
       int leftChar=0;
       int rightSum=0;
       int rightChar=0;
       for(int i=0;i<n/2;i++){
        if(num[i]=='?'){
            leftChar++;
        }else{
            leftSum+=(num[i]-'0');
        }
        int j=i+(n/2);
        if(num[j]=='?'){
            rightChar++;
        }
        else{
            rightSum+=(num[j]-'0');
        }
       }


      int diff = leftSum - rightSum;
        int charDiff = rightChar - leftChar;
        return 2*diff!=9*charDiff;
    }
};