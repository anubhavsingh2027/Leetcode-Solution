class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>freq(26,0);
      for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
      }
      for(int j=0;j<t.size();j++){
        freq[t[j]-'a']--;
      }
      int diff=0;
      for(int i=0;i<26;i++){
        diff+=abs(freq[i]);
      }  
      return diff;
    }
};