class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        unordered_map<int,vector<int>>man;
        queue<pair<int,int>>bfs;
        int ans=INT_MIN;
        bfs.push({headID,0});
        for(int i=0;i<manager.size();i++){
            if(manager[i]!=-1)man[manager[i]].push_back(i);
        }
        while(!bfs.empty()){
            int emp=bfs.front().first;
            int time=bfs.front().second;
            ans=max(ans,time);
            bfs.pop();
            for(auto x:man[emp]){
             bfs.push({x,time+informTime[emp]});   
            }
        }
        return ans;
    }
};