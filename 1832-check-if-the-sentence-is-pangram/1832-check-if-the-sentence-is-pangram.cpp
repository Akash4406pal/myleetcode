class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>alph(26,0);
        for(char ch:sentence){
            alph[ch-'a']++;
        }
        for(int i=0;i<26;i++){
            if(alph[i]==0)return false;
        }
        return true;
    }
};