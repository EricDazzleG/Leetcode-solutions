class Solution {
public:
    string trimTrailingVowels(string s) {
        int last = s.length()-1;
        while(last>=0){
            char c = s[last];
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                last--;
            }
            else{
                break;
            }
           
        }
         return s.substr(0,last+1);
    }
};