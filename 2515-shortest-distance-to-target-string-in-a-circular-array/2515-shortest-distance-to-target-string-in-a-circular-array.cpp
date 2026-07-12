class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        if(words[startIndex]==target)return 0;
        int ans=-1,n=words.size();
        int i=(startIndex+1)%n,steps=1;
        while(i!=startIndex){
            if(words[i]==target){
                ans=steps;
                break;}
            i=(i+1)%n;
            steps++;
        }
        i=(startIndex-1+n)%n;
        steps=1;
        while(i!=startIndex){
            if(words[i]==target){
                if(ans==-1)ans=steps;
                else ans=min(ans,steps);
                break;
            }
            i=(i-1+n)%n;
            steps++;
        }
        return ans;
    }
};