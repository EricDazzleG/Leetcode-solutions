class Solution {
public:

    string solve(string &s,int l, int r){
        while(l>=0 && r<s.length() && s[l]==s[r]){
            l--;
            r++;
        }
        return s.substr(l+1,r-l-1);
    }
    string longestPalindrome(string s) {
        int n = s.length();
        if(n<=1) return s;
        string maxsub = s.substr(0,1);
        for(int i =0;i<n-1;i++){
            string odd = solve(s,i,i);
            string even = solve(s,i,i+1);
            if(odd.length()>maxsub.length()){
                maxsub=odd;
            }
            if(even.length()>maxsub.length()){
                maxsub=even;
        
            }
        }
        return maxsub;
    }
};