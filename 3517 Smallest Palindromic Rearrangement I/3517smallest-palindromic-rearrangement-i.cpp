class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        int b[26] = {0};
        for(int i =0;i<n/2;i++){
            b[s[i]-'a']++;
        }
        int idx=0;
        for(int i =0;i<26;i++){
            while(b[i]-- >0){
                s[idx++]= (char)(i+'a');
            }
        }
        for(int i =0;i<n/2;i++){
            s[n-i-1] = s[i];
        }
        return s;


        
    }
};