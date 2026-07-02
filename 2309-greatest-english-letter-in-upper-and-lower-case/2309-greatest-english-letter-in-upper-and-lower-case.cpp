class Solution {
public:
    string greatestLetter(string s) {
        vector<int>lower(26,-1);
        vector<int>upper(26,-1);
        string ans="";
        for(int i=0;i<s.size();i++){
            if(isupper(s[i])&&upper[s[i]-'A']==-1){
                upper[s[i]-'A']=i;
            }
            else if(islower(s[i])){
                lower[s[i]-'a']=i;
            }
        }
        for(int i=0;i<26;i++){
            if(upper[i]!=-1&&lower[i]!=-1)ans={ static_cast<char>('A' + i) };
        }
        return ans;
    }
};