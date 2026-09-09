class Solution {
public:
    void buildPath(vector<vector<int>>& graph,int node,vector<vector<int>>&ans,vector<int>&path){
        int n=graph.size();
        path.push_back(node);
        if(node==n-1){
            ans.push_back(path);
            path.pop_back();
            return;
        }
        for(int x:graph[node]){
            buildPath(graph,x,ans,path);
        }
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;vector<int>path;
        buildPath(graph,0,ans,path);
        return ans;
    }
};