class Solution {
public:
    struct comp{
        bool operator()(pair<int,int>a,pair<int,int>b){
            return a.first>b.first;
        }
    };
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        if(n==0)return arr;
        priority_queue<pair<int,int>,vector<pair<int,int>>,comp>pq;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            pq.push({arr[i],i});
        }
        int rank=1,prev=pq.top().first;
        ans[pq.top().second]=1;
        pq.pop();
        while(!pq.empty()){
            int num=pq.top().first;
            int pos=pq.top().second;
            if(prev!=num) rank++;
            ans[pos]=rank;
            prev=num;
            pq.pop();
        }
        return ans;
    }
};