class Solution {
public:
    int countValidPrefixes(string s) {
        int one =0,zero=0;
        int count=0;
        for(auto &c : s){
            if(c=='0') zero++;
            else one++;
            if(abs(zero-one)<=1) count++;
        }
        return count;
    }
};