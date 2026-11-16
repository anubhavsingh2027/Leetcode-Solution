class Solution {
public:
    int romanToInt(string s) {
        vector<int>mp(26,0);
        mp['I'-'A']=1;
        mp['V'-'A']=5;
        mp['X'-'A']=10;
        mp['L'-'A']=50;
        mp['C'-'A']=100;
        mp['D'-'A']=500;
        mp['M'-'A']=1000;
            int ans=0;
            for(int i=0;i<s.size();i++){
                if(i+1<s.size() && mp[s[i]-'A'] <mp[s[i+1]-'A'] ){
                    ans-=mp[s[i]-'A'];
                } else{
                    ans+=mp[s[i]-'A'];
                }
            }
            return ans;
    } 
};