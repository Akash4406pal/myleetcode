class Solution {
public:
    char convert(char ch){
        return isupper(ch)?tolower(ch):toupper(ch); 
    }
    int numberOfSpecialChars(string word) {
        unordered_set<char>st;
        int ans=0;
        for(char ch:word){
            if(st.find(ch)==st.end()){
                if(st.find(convert(ch))!=st.end()){
                    ans++;
                }
            }
            st.insert(ch);
        }
        return ans;
    }
};