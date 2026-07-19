class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for(int i=1;i<=n;i++){
            if(n%i==0)ans+=pow(nums[i-1],2);
        }
        return ans;
    }
};