class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            if(nums[0]==1)return 2;
            else return 1;
            }
        vector<bool>isPresent(n+1,false);
        for(int num:nums){
            if(num>=0 && num<=n)isPresent[num]=true;
        }
        for(int i=1;i<=n;i++){
            if(!isPresent[i])return i;
        }
        return n+1;
    }
};