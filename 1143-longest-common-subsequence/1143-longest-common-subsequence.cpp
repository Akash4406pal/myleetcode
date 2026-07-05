class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int i=text1.size(),j=text2.size();
        vector<vector<int>>dp(i,vector<int>(j,-1));
        if(text1[0]==text2[0])dp[0][0]=1;
        else dp[0][0]=0;
        for(int x=1;x<j;x++){
            if(text1[0]==text2[x])dp[0][x]=1;
            else dp[0][x]=dp[0][x-1];
        }
        for(int y=1;y<i;y++){
            if(text2[0]==text1[y])dp[y][0]=1;
            else dp[y][0]=dp[y-1][0];
        }
        for(int x=1;x<i;x++){
            for(int y=1;y<j;y++){
                if(text1[x]==text2[y])dp[x][y]=dp[x-1][y-1]+1;
                else dp[x][y]=max(dp[x-1][y],dp[x][y-1]);
            }
        }
        return dp[i-1][j-1];
    }
};