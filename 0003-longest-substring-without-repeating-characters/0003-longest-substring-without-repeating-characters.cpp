class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        if(s.length()==1) return 1;
        int ans=0;
        int left=0;
        int right=0;
        unordered_set<char> se;
        while(right<s.length()){
            char c = s[right];
            while(se.count(c)){
                se.erase(s[left]);
                left++;

            }
            se.insert(c);
            ans = max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};