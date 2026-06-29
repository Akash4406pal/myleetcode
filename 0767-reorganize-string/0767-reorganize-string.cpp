class Solution {
public:
    struct comp{
        bool operator()(pair<char,int>&a,pair<char,int>&b){
            return a.second<b.second;
        }
    };
    string reorganizeString(string s) {
        vector<int>freq(26,0);
        string ans;
       pair<char,int>temp={' ',0};
        for(char ch:s){
            freq[ch-'a']++;
        }
        priority_queue<pair<char,int>,vector<pair<char,int>>,comp>pq;
        for(int i=0;i<26;i++){
            if(freq[i]>0)pq.push({'a'+i,freq[i]});
        }
        while(!pq.empty()){
            char ch=pq.top().first;
            int charFreq=pq.top().second;
            pq.pop();
            ans+=ch;
            if(temp.second>0)pq.push({temp.first,temp.second});
            temp={ch,charFreq-1};
        }
    return ans.size()==s.size()?ans:"";
    }
};