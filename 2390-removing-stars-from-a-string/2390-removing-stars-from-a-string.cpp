class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        string newS="";
        for(char ch:s){
            if(ch=='*')st.pop();
            else st.push(ch);
        }
        while(!st.empty()){
            newS.insert(0,1,st.top());
            st.pop();
        }
        return newS;
    }
};