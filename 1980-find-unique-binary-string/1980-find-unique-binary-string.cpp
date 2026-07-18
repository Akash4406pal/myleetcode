class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size(),number=pow(2,n-1)+1;
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            int num=0;
            for(int j=n-1,k=0;j>=0;j--,k++){
                num+=pow(2,k)*(nums[i][j]-'0');
            }
            st.insert(num);
        }
        for(int i=0;i<number;i++){
            if(!st.contains(i)){
                string res = "";
                for (int j = n - 1; j >= 0; j--) {
                if ((i >> j) & 1) res += '1';
                else res += '0';
                }
                return res;
            };
        }
        return "";
    }
};