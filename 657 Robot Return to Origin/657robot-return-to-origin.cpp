class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(auto &a : moves){
            if(a=='L') x++;
            if(a=='R') x--;
            if(a=='U') y++;
            if(a=='D') y--;
            
        }
        return (!x && !y);
    }
};