class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int smallest=INT_MAX,smallest2=INT_MAX;
        for(int num:nums){
            if(num<smallest||smallest==INT_MAX)smallest=num;
            else if((num>smallest && num<smallest2)||(num>smallest && smallest2==INT_MAX))smallest2=num;
            else if(num>smallest2 && smallest2!=INT_MAX)return true;
        }
        return false;
    }
};