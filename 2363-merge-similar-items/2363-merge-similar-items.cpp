class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int>mpp;
        vector<vector<int>>ans;
        for(int i=0;i<items1.size();i++){
            mpp[items1[i][0]]+=items1[i][1];
        }
        for(int i=0;i<items2.size();i++){
            mpp[items2[i][0]]+=items2[i][1];
        }
        for(auto x:mpp){
            ans.push_back({x.first,x.second});
        }
        return ans;
    }
};