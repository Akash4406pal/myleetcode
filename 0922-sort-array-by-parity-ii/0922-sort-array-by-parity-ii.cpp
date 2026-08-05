class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        queue<int>odd;
        queue<int>even;
        for(int num:nums){
            if(num%2==0)even.push(num);
            else odd.push(num);
        }
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                nums[i]=even.front();
                even.pop();
            }
            else {
                nums[i]=odd.front();
                odd.pop();
            }
        }
        return nums;
        
    }
};