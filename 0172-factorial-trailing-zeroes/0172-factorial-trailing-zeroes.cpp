class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0,power=1;
        while(pow(5,power)<=n){
            ans+=n/pow(5,power);
            power++;
        }
        return ans;
    }
};