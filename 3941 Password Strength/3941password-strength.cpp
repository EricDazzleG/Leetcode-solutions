class Solution {
public:
    int passwordStrength(string password) {
        set<char> st(password.begin(),password.end());
        int score = 0;
        for(auto x: st){
            if(x>='a' && x<='z') score+=1; 
            if(x>='A' && x<='Z') score+=2; 
            if(x>='0' && x<='9') score+=3; 
            if(x=='!' || x=='@' || x=='#' || x=='$') score+=5;
        }
        return score;
    }
};