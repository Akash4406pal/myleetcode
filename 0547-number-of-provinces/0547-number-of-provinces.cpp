class Solution {
public:
    void traverse(int x,vector<vector<int>>& isConnected,vector<bool>&vis){
        queue<int>qu;
        int n=isConnected.size();
        qu.push(x);
        while(!qu.empty()){
            int x=qu.front();
            qu.pop();
            vis[x]=1;
            for(int i=0;i<n;i++){
            if(isConnected[x][i]==1&&vis[i]==0){
                qu.push(i);
            }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<bool>vis(n,0);
        int ans=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                traverse(i,isConnected,vis);
                ans++;
            }
        }
        return ans;
    }
};