class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        unordered_set<string>st;
        vector<bool>dp(n+1,false);
        for(auto word:wordDict){
            st.insert(word);
        }
        dp[0]=true;
        for(int i=1;i<=n;i++){
            for(int j=i-1;j>=0&&(i-j)<=20;j--){
                if(dp[j]&&st.contains(s.substr(j,i-j))){dp[i]=true;
                break;}
            }
        }
        return dp[n];
    }
};