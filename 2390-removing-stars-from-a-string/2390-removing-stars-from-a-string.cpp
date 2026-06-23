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
            newS+=st.top();
            st.pop();
        }
        reverse(newS.begin(),newS.end());
        return newS;
    }
};