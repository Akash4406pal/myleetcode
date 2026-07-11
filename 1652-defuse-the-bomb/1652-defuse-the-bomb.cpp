class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            if(k>0){
                for(int j=1;j<=k;j++){
                    ans[i]+=code[(i+j)%n];
                }
            }
            else if(k<0){
                for(int j=k;j<0;j++){
                    if(i+j<0)ans[i]+=code[i+j+n];
                    else ans[i]+=code[i+j];
                }
            }
            else ans[i]=0;
        }
        return ans;
    }
};