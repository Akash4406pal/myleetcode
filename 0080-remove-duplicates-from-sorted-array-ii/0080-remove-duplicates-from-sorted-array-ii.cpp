class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0,j=0,n=nums.size();
        for(int num:nums){
         if(k<2 || num!=nums[k-2]){
            nums[k]=num;
            k++;}  
        }
        return k;
    }
};