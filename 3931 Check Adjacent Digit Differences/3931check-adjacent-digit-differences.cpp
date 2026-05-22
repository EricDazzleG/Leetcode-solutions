class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        for(int i =1;i<s.size();i++){
            int a = s[i]-'0';
            int b = s[i-1] -'0';
            int diff = abs(a-b);
            if(diff>2) return false;
        }
        return true;
    }
};