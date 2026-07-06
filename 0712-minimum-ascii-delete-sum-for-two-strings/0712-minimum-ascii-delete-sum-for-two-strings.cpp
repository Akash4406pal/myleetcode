class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int i=s1.size(),j=s2.size();
        vector<vector<int>>dp(i+1,vector<int>(j+1,0));
        for(int x=1;x<=i;x++)dp[x][0]=dp[x-1][0]+s1[x-1];
        for(int x=1;x<=j;x++)dp[0][x]=dp[0][x-1]+s2[x-1];
        for(int x=1;x<=i;x++){
            for(int y=1;y<=j;y++){
                if(s1[x-1]==s2[y-1])dp[x][y]=dp[x-1][y-1];
                else dp[x][y]=min(s1[x-1]+dp[x-1][y],s2[y-1]+dp[x][y-1]);
            }
        }
        return dp[i][j];
    }
};