class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int sum=0,ans=0,n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==k)ans++;
            ans+=mpp[sum-k];
            mpp[sum]++;
        }
        return ans;
    }
};