class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        for(int l=0;l<n;l++){
            int maxi=nums[l],mini=nums[l];
            for(int r=l;r<n;r++){
                maxi=max(maxi,nums[r]);
                mini=min(mini,nums[r]);
                sum+=(maxi-mini);
            }
        }
        return sum;
    }
};