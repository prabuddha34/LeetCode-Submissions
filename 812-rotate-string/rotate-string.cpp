class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())return false; //this is the edge case !
        string join=s+s;

        return join.find(goal)<join.length();
    }
};