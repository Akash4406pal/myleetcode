class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
     if(magazine.size()<ransomNote.size())return false;
     unordered_map<char,int>mpp;
     for(char ch:magazine){
        mpp[ch]++;
     }
     for(int i=0;i<ransomNote.size();i++){
        if(mpp[ransomNote[i]]>0)mpp[ransomNote[i]]--;
        else return false;
     }
     return true;
    }
};