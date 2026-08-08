class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        int i = n/2;
        int j = i;
        int ans=0;
        for(int i =0;i<n;i++){
            int l =i,r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                ans++;
                l--;
                r++;
            }
            l=i,r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                ans++;
                l--;
                r++;
            }

        }
        return ans;
    }
};