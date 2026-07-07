class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int ans=0,n=nums.size();
        vector<int>freq(201,0);
        for(int i=0;i<n-1;i++){
           for(int j=i+1;j<n;j++){
            int tar=nums[j]-nums[i];
            if(tar>0 && tar<=200)ans+=freq[tar];
           }
           for(int k=0;k<i;k++){
            freq[nums[k]+nums[i]]++;
           }
        }
        return ans;
    }
};