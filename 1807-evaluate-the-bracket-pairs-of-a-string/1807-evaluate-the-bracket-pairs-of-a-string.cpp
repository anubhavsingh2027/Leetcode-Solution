class Solution {
public:
    string evaluate(string s, vector<vector<string>>& k) {
        unordered_map<string,string>mp;
        for(int i=0;i<k.size();i++){
            mp[k[i][0]]=k[i][1];
        }
        int st=0;
        bool status=false;
        string key="";
        int i=0;
       while(i<s.size()){
            cout<<i<<endl;
            if(s[i]=='('){
                st=i;
                status=true;
                 key="";
            }
           
            else if(s[i]==')'){
               status = false;

                int newSize = mp.find(key)==mp.end()?1:mp[key].size();
                string value=mp.find(key)==mp.end()?"?":mp[key];
                s.replace(st, i - st + 1, value);

                i = st + newSize;
                
                key = "";
                continue;
            }
           else if(status){
                key+=s[i];
            }
           
            i++;
            
        }
        return s;
    }
};
