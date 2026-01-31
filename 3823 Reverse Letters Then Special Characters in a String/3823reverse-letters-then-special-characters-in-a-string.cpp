class Solution {
public:
    string reverseByType(string s) {
        string letters = "",special="";
        for(char c:s){
            if(islower(c)) letters+=c;
            else special +=c;
        }
        reverse(letters.begin(),letters.end());
        reverse(special.begin(),special.end());

        int a = 0, b =0;
        for(char &c : s){
            if(islower(c)) c = letters[a++];
            else c = special[b++];
        }
        return s;
    }
};