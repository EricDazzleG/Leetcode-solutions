class Solution {
public:
    int minFlips(string s) {
        int one =0;
        int zero = 0;
        for(auto &x: s){
            if(x=='1') one++;
            if(x=='0') zero++;
        }
        if(!one ||!zero) return 0;

        return min(zero,one-(s.front() & s.back() & 1)-1);
    }
};