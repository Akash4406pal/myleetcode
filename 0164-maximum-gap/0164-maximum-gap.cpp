class Solution {
public:
    int maximumGap(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int x:nums)pq.push(x);
        int ans=0;
        int prev=pq.top();
        pq.pop();
        while(!pq.empty()){
            int curr=pq.top();
            ans=max(ans,curr-prev);
            prev=curr;
            pq.pop();
        }
        return ans;
    }
};