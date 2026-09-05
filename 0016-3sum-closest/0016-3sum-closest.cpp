class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size(),ans=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        int sum=0,diff=INT_MAX;
        for(int i=0;i<n-2;i++){
            int l=i+1,r=n-1;
            while(l<r){
                sum=(nums[i]+nums[l]+nums[r]);
                if(abs(sum-target)<diff){
                    ans=sum;
                    diff=abs(sum-target);
                }
                if(sum==target)return sum;
                else if(sum<target) l++;
                else r--;
        }}
        return ans;
    }
};