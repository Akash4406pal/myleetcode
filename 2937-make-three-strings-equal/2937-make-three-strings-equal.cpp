class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int i=s1.size(),j=s2.size(),k=s3.size();
        int small=min(min(i,j),k),equal=0;
        for(int x=0;x<small;x++){
            if(s1[x]==s2[x] && s2[x]==s3[x])equal++;
            else break;
        }
        if(equal==0)return -1;
        return i+j+k-3*equal;
    }
};