class Solution{
    
public:
 bool isAnagram(string s, string t) {
    if(s.size()!=t.size()) return false;
    vector<int>mp(26,0);
        for(char c:t){
            mp[c-'a']++;
        }
        for(char c:s){
            if(mp[c-'a']==0)return false;
            mp[c-'a']--;
        }
        return true;
 }
};