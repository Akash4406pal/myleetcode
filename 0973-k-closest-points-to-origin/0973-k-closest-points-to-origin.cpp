class Solution {
public:
    struct comp{
        bool operator()(vector<int>a,vector<int>b){
            return (a[0]*a[0]+a[1]*a[1])>(b[0]*b[0]+b[1]*b[1]);
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>,vector<vector<int>>,comp>pq;
        vector<vector<int>>ans;
        for(auto x:points){
                pq.push(x);
        }
        for(int i=0;i<k;i++){
            auto point=pq.top();
            ans.push_back(point);
            pq.pop();
        }
        return ans;
    }
};