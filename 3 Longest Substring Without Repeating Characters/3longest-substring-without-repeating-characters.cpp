
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> temp;
        int maxLength = 0;
        int left = 0; 

        for (int right = 0; right < s.size(); right++) {
            while (temp.find(s[right]) != temp.end()) { 
                temp.erase(s[left]); 
                left++; 
            }
            temp.insert(s[right]); 
            maxLength = max(maxLength, right - left + 1); 
        }

        return maxLength;
    }
};

