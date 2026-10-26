class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_set<string>see,rep;
        vector<string>ans;
        for(int i=0;i+10<=s.size();i++){
            string sub=s.substr(i,10);
            if(see.count(sub)){
                if(rep.insert(sub).second){
                    ans.push_back(sub);
                }
            }
            else{
                see.insert(sub);
            }
        }
        return ans;
    }
};