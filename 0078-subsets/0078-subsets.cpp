class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        ans.push_back({});
        for(int i=0;i<n;i++){
            int x=ans.size();
            for(int j=0;j<x;j++){
                vector<int>x;
                x=ans[j];
                x.push_back(nums[i]);
                ans.push_back(x);
            }
        }
        return ans;
    }
};