class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        string newS="";
        for(char ch:s){
            if(ch=='*'){
                if(newS.size()>0)newS.pop_back();
            }
            else newS.push_back(ch);
        }
        return newS;
    }
};