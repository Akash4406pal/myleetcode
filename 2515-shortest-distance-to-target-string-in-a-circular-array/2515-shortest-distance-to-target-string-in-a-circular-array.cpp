class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        if(words[startIndex]==target)return 0;
        int ans=-1,n=words.size();
        for(int i=0;i<n;i++){
            if(words[i]==target){
                int dist=abs(i-startIndex);
                int shortest=min(dist,n-dist);
                if(ans==-1||shortest<ans)ans=shortest;
            }
        }
        return ans;
    }
};