class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        string doubleC=s+s;
        return doubleC.contains(goal)?true:false;
    }
};