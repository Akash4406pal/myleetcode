class Solution {
public:
    struct comp{
    bool operator()(int a,int b){
            return a>b;
        }
    };
    vector<int> sortEvenOdd(vector<int>& nums) {
        priority_queue<int,vector<int>,comp>even;
        priority_queue<int>odd;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i%2==0)even.push(nums[i]);
            else{
                odd.push(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i]=even.top();
                even.pop();}
            else{
                nums[i]=odd.top();
                odd.pop();}
        }
        return  nums;
    }
};