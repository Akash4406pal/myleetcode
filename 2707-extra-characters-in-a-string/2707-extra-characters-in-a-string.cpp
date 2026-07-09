class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n=s.size();
        unordered_set<string>st;
        for(auto subStr:dictionary){
            st.insert(subStr);
        }
        vector<int>dp(n+1,0);
        for(int i=n-1;i>=0;i--){
             dp[i]=1+dp[i+1];
             string curr="";
             for(int j=i;j<n;j++){
                curr+=s[j];
                if(st.contains(curr)){
                    int len=curr.size();
                    dp[i]=min(dp[i],dp[i+len]);
                }
             }
        }
        return dp[0];
    }
};