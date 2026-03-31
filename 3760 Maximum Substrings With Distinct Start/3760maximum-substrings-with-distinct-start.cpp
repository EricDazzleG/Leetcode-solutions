class Solution {
public:
    int maxDistinct(string s) {
        set<char> se(s.begin(),s.end());
        return se.size();
    }
};