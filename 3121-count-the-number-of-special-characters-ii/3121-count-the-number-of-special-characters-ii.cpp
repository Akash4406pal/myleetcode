class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>lower(26,-1);
        vector<int>upper(26,-1);
        int ans=0;
        for(int i=0;i<word.size();i++){
            if(isupper(word[i])&&upper[word[i]-'A']==-1){
                upper[word[i]-'A']=i;
            }
            else if(islower(word[i])){
                lower[word[i]-'a']=i;
            }
        }
        for(int i=0;i<26;i++){
            if(upper[i]!=-1&&lower[i]!=-1){
                if(lower[i]<upper[i])ans++;
        }
        }
        return ans;
    }
};