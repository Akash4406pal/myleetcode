class Solution {
public:
    int getLucky(string s, int k) {
       int x=0,steps=1;
       for(char ch:s){
        int code=ch-'a'+1;
            if(code>9){
                x+=code%10;
                code/=10;
                x+=code%10;
            }
            else x+=code;
       }
       while(steps<k){
        int s=0;
        while(x>0){
        s+=x%10;
        x/=10;}
        x=s;
        steps++;
       }
        return x;
    }
};