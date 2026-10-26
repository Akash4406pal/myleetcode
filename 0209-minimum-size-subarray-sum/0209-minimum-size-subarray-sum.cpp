class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0,n=nums.size(),sum=0,ans=INT_MAX;
        while(r<n){
            sum+=nums[r];
            while(l<=r&&sum>=target){
                ans=min(ans,r-l+1);
                sum-=nums[l];
                l++;
            }
            r++;
            }
            return ans==INT_MAX?0:ans;
        }
};