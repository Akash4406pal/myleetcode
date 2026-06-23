class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string ans="";
        for(int i=0,n=s.size();i<n;i++){
            string word="";
            while(i<n&&s[i]!=' '){
                word+=s[i];
                i++;
            }
            if(word.size()>0)st.push(word);
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            if(st.size()>0)ans+=' ';
        }
        return ans;
    }
};