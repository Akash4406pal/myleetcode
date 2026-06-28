class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int x) {
        int n=nums.size(),high=n-1,low=0,startIdx=-1,endIdx=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==x){
                startIdx=endIdx=mid;
                while(startIdx>0 && nums[startIdx-1]==x)startIdx--;
                while(endIdx<n-1 && nums[endIdx+1]==x)endIdx++;
                break;
            }
            else if(nums[mid]>x)high=mid-1;
            else low=mid+1;
        }
        return {startIdx,endIdx};
    }
};