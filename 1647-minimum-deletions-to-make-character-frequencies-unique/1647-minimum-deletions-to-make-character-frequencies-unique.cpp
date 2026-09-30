class Solution {
public:
    int minDeletions(string s) {
        vector<int> freq(26, 0);
        vector<int>realfreq;
        unordered_set<int>st;
        int deletion=0;
        for(char ch:s)freq[ch-'a']++;
        for(int x:freq){
            if(x>0)realfreq.push_back(x);
        }
        for(int x:realfreq){
            while(st.contains(x)){
                x--;
                deletion++;
            }
            if(x>0)st.insert(x);
        }
        return deletion;
    }
};