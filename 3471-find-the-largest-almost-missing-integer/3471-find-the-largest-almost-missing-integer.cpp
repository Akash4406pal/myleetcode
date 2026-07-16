class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        unordered_set<int>st;
        int ans=INT_MIN;
        for(int i=0;i<nums.size()-k+1;i++){
            for(int j=i;j<i+k;j++){
                st.insert(nums[j]);
            }
            for(auto x:st){
                count[x]++;
            }
            st.clear();
        }
        for(int num:nums){
            if(count[num]==1)ans=max(ans,num);
        }
        return ans==INT_MIN?-1:ans;
    }
};