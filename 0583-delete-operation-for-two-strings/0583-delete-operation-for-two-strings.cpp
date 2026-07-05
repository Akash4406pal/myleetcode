class Solution {
public:
    int lcs(int i,int j,string &word1, string &word2,vector<vector<int>>&dp){
      if(i<0 || j<0)return 0;
      if(dp[i][j]!=-1)return dp[i][j];
      if(word1[i]==word2[j]){
        dp[i][j]=lcs(i-1,j-1,word1,word2,dp)+1;
        return dp[i][j];
      }
      else{
        dp[i][j]=max(lcs(i-1,j,word1,word2,dp),lcs(i,j-1,word1,word2,dp));
        return dp[i][j];
      }
    }
    int minDistance(string word1, string word2) {
        int i=word1.size(),j=word2.size();
        vector<vector<int>>dp(i,vector<int>(j,-1));
        int lcs_size=lcs(i-1,j-1,word1,word2,dp);
        return i+j-2*lcs_size;
    }
};