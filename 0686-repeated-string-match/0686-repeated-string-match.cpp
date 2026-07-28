class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int n=(a.size()+b.size()-1)/a.size();
        string temp="";
        unordered_set<char>st;
        for(char ch:a){
            st.insert(ch);
        }
        for(char ch:b){
            if(st.count(ch)==0)return -1;
        }
        for(int i=1;i<=n;i++){
            temp+=a;
        }
        if(temp.find(b) != string::npos)return n;
        temp+=a;
        if(temp.find(b) != string::npos)return n+1;
        return -1;
    }
};