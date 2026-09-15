class Solution {
public:
    void getalluniqsubset(vector<int>& arr,vector<vector<int>>&allsubsets,vector<int>& ans,int i){
        int n=arr.size();
        if(i==n){
            allsubsets.push_back(ans);
            return;
        }
        ans.push_back(arr[i]);
        getalluniqsubset(arr,allsubsets,ans,i+1);
        ans.pop_back();
        int index=i+1;
        while(index<n && arr[index]==arr[index-1])index++;
        getalluniqsubset(arr,allsubsets,ans,index);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>allSubsets;
        sort(nums.begin(),nums.end());
        getalluniqsubset(nums,allSubsets,ans,0);
        return allSubsets;
    }
};