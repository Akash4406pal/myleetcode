class Solution {
public:
    int minDistance(string word1, string word2) {
        int i=word1.size(),j=word2.size();
        vector<vector<int>>dp(i,vector<int>(j,-1));
        if(word1[0]==word2[0])dp[0][0]=1;
        else dp[0][0]=0;
        for(int x=1;x<j;x++){
            if(word1[0]==word2[x])dp[0][x]=1;
            else dp[0][x]=dp[0][x-1];
        }
        for(int y=1;y<i;y++){
            if(word2[0]==word1[y])dp[y][0]=1;
            else dp[y][0]=dp[y-1][0];
        }
        for(int x=1;x<i;x++){
            for(int y=1;y<j;y++){
                if(word1[x]==word2[y])dp[x][y]=dp[x-1][y-1]+1;
                else dp[x][y]=max(dp[x-1][y],dp[x][y-1]);
            }
        }
        return i+j-2*dp[i-1][j-1];
    }
};