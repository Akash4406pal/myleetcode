class Solution {
public:
    void helper(int opened,int closed,string &path,vector<string>&ans,int n){
        if(opened==n && closed==n){
            ans.push_back(path);
            return;
        }
        if(opened<n){
            path.push_back('(');
            helper(opened+1,closed,path,ans,n);
            path.pop_back();
        }
        if(closed<opened){
            path.push_back(')');
            helper(opened,closed+1,path,ans,n);
            path.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
       vector<string>ans;
       string path="";
       helper(0,0,path,ans,n);
       return ans;
    }
};