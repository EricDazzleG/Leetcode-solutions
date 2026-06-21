class Solution {
public:
    int maxDistance(string moves) {
        int x =0,y=0,d=0;
        for(auto &m : moves){
            if(m=='_') d++;
            if(m=='U') x++;
            if(m=='D') x--;
            if(m=='R') y++;
            if(m=='L') y--;
        }
        return abs(x)+abs(y)+abs(d);
    }
};