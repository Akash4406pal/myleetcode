class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int originalc=image[sr][sc];
    if(originalc==color)return image;
    int m=image.size(),n=image[0].size();
        queue<pair<int,int>>qu;
        qu.push({sr,sc});
        image[sr][sc]=color;
        vector<int>row={1,-1,0,0};
        vector<int>column={0,0,1,-1};
        while(!qu.empty()){
            auto pr=qu.front();
            for(int i=0;i<4;i++){
                int newr=pr.first+row[i];
                int newc=pr.second+column[i];
                if(newr>=0&&newr<m&&newc>=0&&newc<n&&image[newr][newc]==originalc){
                    image[newr][newc]=color;
                    qu.push({newr,newc});
                }
            }
            qu.pop();
        }
        return image;
    }
};