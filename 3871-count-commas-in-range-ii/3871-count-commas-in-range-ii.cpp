class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000)return 0;
        else if(n>=1000 && n<pow(10,6))return n-999;
        else if(n>=pow(10,6) && n<pow(10,9))return (n+1-pow(10,6))*2+(pow(10,6)-1000);
        else if(n>=pow(10,9) && n<pow(10,12))return (n+1-pow(10,9))*3+(pow(10,9)-pow(10,6))*2+(pow(10,6)-1000);
        else if(n>=pow(10,12) && n<pow(10,15))return (n+1-pow(10,12))*4+(pow(10,12)-pow(10,9))*3+(pow(10,9)-pow(10,6))*2+(pow(10,6)-1000);
        else return (n+1-pow(10,12))*4+(pow(10,12)-pow(10,9))*3+(pow(10,9)-pow(10,6))*2+(pow(10,6)-1000)+1;
    }
};