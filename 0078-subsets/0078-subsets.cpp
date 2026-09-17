class Solution {
public:
    void buildSet(int i,vector<int>& nums,vector<vector<int>>&ans,vector<int>& x){
        if(i==nums.size()){
            ans.push_back(x);
            return;}
        x.push_back(nums[i]);
        buildSet(i+1,nums,ans,x);
        x.pop_back();
        buildSet(i+1,nums,ans,x);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>x;
        vector<vector<int>>ans;
        buildSet(0,nums,ans,x);
        return ans;
    }
};