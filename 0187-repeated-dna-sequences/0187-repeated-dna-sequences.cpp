class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_set<string>see,rep;
        vector<string>ans;
        for(int i=0;i+10<=s.size();i++){
            string sub=s.substr(i,10);
            if(!see.insert(sub).second){// check more than present but not check unique insert
                if(rep.insert(sub).second){// check unique insert
                    ans.push_back(sub);
                }
            }
        }
        return ans;
    }
};