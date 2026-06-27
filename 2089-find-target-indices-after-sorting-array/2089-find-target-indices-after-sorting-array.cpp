class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        int small=0,equal=0;
        for(int x:nums){
            if(x<target)small++;
            if(x==target)equal++;
        }
        for(int i=0;i<equal;i++){
            ans.push_back(i+small);
        }
        return ans;
    }
};