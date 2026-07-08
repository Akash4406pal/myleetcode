class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs[0].size();i++){
            char ch=strs[0][i];
            bool isContinue=true;
            for(int j=1;j<strs.size();j++){
                if(i>=strs[j].size()||strs[j][i]!=ch){
                    isContinue=false;
                    break;
                }
            }
            if(isContinue)ans+=ch;
            else break;
        }
        return ans;
    }
};