class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x=0,i=0,j=0,n=nums.size();
        while(j<n){
            while(j<n&&nums[i]==nums[j])j++;
            if(j-i>=2){
                nums[x]=nums[i];
                nums[x+1]=nums[i];
                x+=2;
            }
            else{
            nums[x]=nums[i];
            x++;}
            i=j;j=i;
        }
        return x;
    }
};