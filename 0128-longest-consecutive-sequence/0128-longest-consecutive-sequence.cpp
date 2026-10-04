class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     int secondLast=INT_MIN;
     int currCount=1,longest=1;
     sort(nums.begin(), nums.end());
     for(int i=0,n=nums.size();i<n;i++){
        if(secondLast+1==nums[i]){
            secondLast=nums[i];
            currCount++;
            longest=max(longest,currCount);
        }
        else if(secondLast==nums[i]){
            continue;
        }
        else{
            secondLast=nums[i];
            currCount=1;
        }
     }
     if(nums.size()==0){
        return 0;
     }
     return longest;   
    }
};