class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        vector<pair<int,int>>a,b;
        int ans=0;
        map<pair<int,int>,int>mpp;
        for(int i=0;i<img1.size();i++){
            for(int j=0;j<img1[0].size();j++){
                if(img1[i][j]==1)a.push_back({i,j});
            }
        }
        for(int i=0;i<img2.size();i++){
            for(int j=0;j<img2[0].size();j++){
                if(img2[i][j]==1)b.push_back({i,j});
            }
        }
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                mpp[{(a[i].first-b[j].first),(a[i].second-b[j].second)}]++;
            }
        }
        for(auto x:mpp){
            ans=max(ans,x.second);
        }
        return ans;
    }
};