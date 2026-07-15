class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
     vector<int>ans(2,0);
     unordered_map<int,int>mpp;
     for(int num:nums)mpp[num]++;
     for(int i=1;i<=nums.size();i++){
        if(mpp.find(i)!=mpp.end()){
            if(mpp[i]==2)ans[0]=i;
        }
        else ans[1]=i;
     }
     return ans;
    }
};