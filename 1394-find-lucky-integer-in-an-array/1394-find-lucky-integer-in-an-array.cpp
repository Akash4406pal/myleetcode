class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mpp;
        int ans=-1;
        for(int x:arr)mpp[x]++;
        for(auto pair:mpp){
            if(pair.first==pair.second)ans=max(ans,pair.first);
        }
        return ans;
    }
};