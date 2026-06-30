class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> cnt(3,0);
        int ans=0;
        int left =0;
        for(int right=0;right<s.length();right++){
            cnt[s[right]-'a']++;
            while(cnt[0]&&cnt[1]&&cnt[2]){
                ans+= s.length()-right;
                cnt[s[left]-'a']--;
                left++;
            }
        }
        return ans;
    }
};