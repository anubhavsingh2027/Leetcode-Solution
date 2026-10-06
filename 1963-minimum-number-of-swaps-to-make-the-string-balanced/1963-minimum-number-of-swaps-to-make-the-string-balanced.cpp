class Solution {
public:
    int minSwaps(string s) {
       stack<char>st1;
       stack<char>st2;
       for(char c:s){
        if(c=='['){
            st1.push(c);
        }
        else {
        if(!st1.empty()){
            st1.pop();
        }
            else{
                st2.push(c);
            }
       }
       }
       int count=(st2.size()+1)/2;
       return count;
    }
};