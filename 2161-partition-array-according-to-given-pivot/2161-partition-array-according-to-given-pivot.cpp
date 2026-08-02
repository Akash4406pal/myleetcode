class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        queue<int>smaller;
        queue<int>bigger;
        int same=0;
        for(int num:nums){
            if(num<pivot)smaller.push(num);
            else if(num>pivot)bigger.push(num);
            else same++;
        }
        int i=0;
        while(!smaller.empty()){
            nums[i]=smaller.front();
            smaller.pop();
            i++;
        }
        while(same>0){
            nums[i]=pivot;
            i++;
            same--;
        }
        while(!bigger.empty()){
            nums[i]=bigger.front();
            bigger.pop();
            i++;
        }
        return nums;
    }
};