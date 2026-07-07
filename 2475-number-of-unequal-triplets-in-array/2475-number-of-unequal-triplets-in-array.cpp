class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int ans=0,n=nums.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                if(nums[i]-nums[j]!=0){
                    for(int k=j+1;k<n;k++){
                        if(nums[k]-nums[j]!=0 && nums[i]-nums[k]!=0)ans++;
                    }
                }
            }
        }
        return ans;
    }
};