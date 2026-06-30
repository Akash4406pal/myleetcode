class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
       string ans="";
       priority_queue<pair<int,char>>pq;
       if(c>0)pq.push({c,'c'});
       if(b>0)pq.push({b,'b'});
       if(a>0)pq.push({a,'a'});
       while(!pq.empty()){
        int freq=pq.top().first;
        char ch=pq.top().second;
        pq.pop();
        int size=ans.size();
        if(size>1 && ans[size-1]==ch && ans[size-2]==ch){
            if(pq.empty())return ans;
            else {
                auto[count2,ch2]=pq.top();
                ans+=ch2;
                pq.pop();
                if(count2>1)pq.push({count2-1,ch2});
                pq.push({freq,ch});
            }}
        else {
            ans+=ch;
            if(freq>1)pq.push({freq-1,ch});
        }
        }
       return ans;
    }
};