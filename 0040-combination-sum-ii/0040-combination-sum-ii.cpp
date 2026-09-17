class Solution {
public:
    void buildSet(int i,vector<int>& c,int tar,vector<int>&x,vector<vector<int>>&ans){
        if(tar<0)return;
        if(tar==0){
            ans.push_back(x);
            return;
        }
        if(i==c.size())return;
        x.push_back(c[i]);
        buildSet(i+1,c,tar-c[i],x,ans);
        x.pop_back();
        int newi=i+1;
        while(newi<c.size()&&c[newi]==c[i])newi++;
        buildSet(newi,c,tar,x,ans);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>x;
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        buildSet(0,candidates,target,x,ans);
        return ans;
    }
};