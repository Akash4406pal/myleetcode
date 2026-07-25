class Solution {
public:
    void buildStr(int i,vector<string>&ans,vector<string>&st,string& digits,string& str){
        if(i==digits.size()){
            ans.push_back(str);
            return;
        }
        int digit=digits[i]-'0';
        string letters=st[digit];
        for(char letter:letters){
            str.push_back(letter);
            buildStr(i+1,ans,st,digits,str);
            str.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        vector<string> mapping = {
          "",     "",     "abc",  "def", "ghi", 
          "jkl",  "mno",  "pqrs", "tuv", "wxyz"
        };
        string str="";
        buildStr(0,ans,mapping,digits,str);
        return ans;
    }
};