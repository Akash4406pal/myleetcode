class Solution {
public:
    struct comp{
        bool operator()(const vector<int>a,vector<int>b){
            return (a[0]*a[0]+a[1]*a[1])<(b[0]*b[0]+b[1]*b[1]);
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>,vector<vector<int>>,comp>pq;
        vector<vector<int>>ans;
        for(auto point:points){
                if(pq.size()==k){
                    auto x=pq.top();
                    if((pow(x[0],2)+pow(x[1],2))>(pow(point[0],2)+pow(point[1],2))){
                        pq.push(point);
                        pq.pop();
                    };
                }
                else pq.push(point);
        }
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};