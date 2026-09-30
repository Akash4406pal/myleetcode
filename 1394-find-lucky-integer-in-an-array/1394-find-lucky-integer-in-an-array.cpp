class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mpp;
        int ans=-1;
        for(int x:arr)mpp[x]++;
        for(int x:arr){
            if(mpp[x]==x)ans=max(ans,x);
        }
        return ans;
    }
};