class Solution {
public:
    void buildSet(int i,vector<int>& c,int tar,vector<int>&x,vector<vector<int>>&ans){
        if(i==c.size())return;
        if(tar<0)return;
        if(tar==0){
            ans.push_back(x);
            return;
        }
        x.push_back(c[i]);
        buildSet(i,c,tar-c[i],x,ans);
        x.pop_back();
        buildSet(i+1,c,tar,x,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>x;
        vector<vector<int>>ans;
        buildSet(0,candidates,target,x,ans);
        return ans;
    }
};