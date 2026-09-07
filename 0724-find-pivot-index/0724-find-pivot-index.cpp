class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0,currSum=0;
        for(int x:nums)sum+=x;
        for(int i=0;i<nums.size();i++){
            sum-=nums[i];
            if(currSum==sum)return i;
            currSum+=nums[i];
        }
        return -1;
        
    }
};