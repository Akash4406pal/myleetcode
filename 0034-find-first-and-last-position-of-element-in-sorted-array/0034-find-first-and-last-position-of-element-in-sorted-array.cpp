class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)return {-1,-1};
        auto lb=lower_bound(nums.begin(),nums.end(),target);
        auto ub=upper_bound(nums.begin(),nums.end(),target);
        if(lb==nums.end()||*lb!=target)return {-1,-1};
        int index1=lb-nums.begin();
        int index2=ub-nums.begin()-1;
        return {index1,index2};
    }
};