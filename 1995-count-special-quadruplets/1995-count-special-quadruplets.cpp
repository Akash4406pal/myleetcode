class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()-3;i++){
            int sum=nums[i];
            for(int j=i+1;j<nums.size()-2;j++){
                sum=nums[i]+nums[j];
                for(int k=j+1;k<nums.size()-1;k++){
                    sum=nums[i]+nums[j]+nums[k];
                    for(int l=k+1;l<nums.size();l++){
                        if(sum==nums[l])ans++;
                    }
                }
            }
        }
        return ans;
    }
};