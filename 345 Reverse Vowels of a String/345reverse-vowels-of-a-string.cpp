class Solution {
public:
    bool islower(char c){
        c = tolower(c);
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    string reverseVowels(string s) {
        int l = 0;
        int r = s.length()-1;
        while(l<r){
            if(islower(s[l]) && islower(s[r])){
                swap(s[l],s[r]);
                l++,r--;
            }
            else if(islower(s[l])){
                r--;
            }
            else{
                l++;
            }
        }
        return s;
    }
};