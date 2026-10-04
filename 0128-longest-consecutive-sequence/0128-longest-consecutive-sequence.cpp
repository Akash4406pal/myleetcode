class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        unordered_set<int>st;
        for(int x:nums){
            st.insert(x);
        }
        int count=0,maxi=1;
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int x=it;
                count=1;
                while(st.find(x+1)!=st.end()){
                    count++;
                    x=x+1;
                    maxi=max(maxi,count);
                }
            }
        }
        return maxi;
    }
};