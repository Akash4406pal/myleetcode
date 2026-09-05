class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      int l=0,n=nums.size(),r=n-1,x=n-1;
      vector<int>ans(n);
      while(l<=r){
        if(abs(nums[l])<abs(nums[r])){
            ans[x]=pow(nums[r],2);
            x--;
            r--;
        }
        else{
            ans[x]=pow(nums[l],2);
            x--;
            l++;
        }
      }
      return ans;
    }
};