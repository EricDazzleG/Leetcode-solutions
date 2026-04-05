class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int x =0;
        int count =0;
        for(auto &a: moves){
            if(a=='L') x++;
            if(a=='R') x--;
            if(a=='_') count++;
        }
        if(x==0) return count;
        if(x>0) return count+x;
        return abs(-count+x);
    }
};