class Solution {
public:
    void buildPath(int i,vector<vector<int>>& graph,vector<vector<int>>& ans,vector<int>&path){
        path.push_back(i);
        if(i==graph.size()-1){
            ans.push_back(path);
            path.pop_back();
            return;
        }
        for(int j=0;j<graph[i].size();j++){
            buildPath(graph[i][j],graph,ans,path);
        }
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int>path;
        buildPath(0,graph,ans,path);
        return ans;
    }
};