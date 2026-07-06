class Solution {
public:
    int minDistance(string word1, string word2) {
        int i=word1.size(),j=word2.size();
        vector<vector<int>>dp(i+1,vector<int>(j+1,0));
        for(int x=0;x<=i;x++)dp[x][0]=x;
        for(int x=0;x<=j;x++)dp[0][x]=x;
        for(int x=1;x<=i;x++){
            for(int y=1;y<=j;y++){
                if(word1[x-1] == word2[y-1])dp[x][y] = dp[x-1][y-1];
                else
                    dp[x][y] = 1 + min(min(dp[x-1][y-1],dp[x-1][y]),dp[x][y-1]); 
            }
        }
        return dp[i][j];
    }
};