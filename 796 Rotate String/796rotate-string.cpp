class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return 0;
        }
        string d = s+s;
        return(d.find(goal)!=string::npos);
    }
};