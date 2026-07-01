class Solution {
public:
    bool detectCapitalUse(string word) {
        int upperCased=0;
        for(int i=0;i<word.size();i++){
            if(isupper(word[i]))upperCased++;
        }
         if(upperCased==word.size()|| upperCased==0)return true;
         else if(upperCased==1 && isupper(word[0]))return true;
         else return false;
    }
};