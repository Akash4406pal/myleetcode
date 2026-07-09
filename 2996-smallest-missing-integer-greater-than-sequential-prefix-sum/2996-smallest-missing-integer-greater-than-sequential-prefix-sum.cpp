class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int seqSum=nums[0],n=nums.size(),endIdx=n;
        if(n==1)return nums[0]+1;
        unordered_set<int>st;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1)seqSum+=nums[i];
            else{
                endIdx=i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        while(st.contains(seqSum)){
            seqSum++;
        }
        return seqSum;
    }
};