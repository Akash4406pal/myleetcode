class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int>w1(26,0);
        vector<int>w2(26,0);
        for(int i=0;i<word1.size();i++){
            w1[word1[i]-'a']++;
        }
        for(int i=0;i<word2.size();i++){
            w2[word2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(abs(w1[i]-w2[i])>3)return false;
        }
        return true;
    }
};