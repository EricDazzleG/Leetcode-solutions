class Solution {
public:
    string largestGoodInteger(string num) {
        int count = 0;
        char prev='-'; char maxi = ' ';
        for(auto x : num){
            if(x==prev)count++;
            else count=1;
            if(count==3){
                maxi = max(maxi,x);
            }
            prev = x;
        }
        return (maxi==' '?"":string(3,maxi));
    }
};