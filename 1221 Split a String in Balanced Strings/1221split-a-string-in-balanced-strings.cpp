class Solution {
public:
    int balancedStringSplit(string s) {
        if(s.length()<=1) return 0;
        int a =0;
        int count=0;
        for(auto &x:s){
            if(x=='R') a++;
            if(x=='L') a--;
            if(a==0){
                count++;
            }
        }
        return count;
    }
};