class Solution {
public:
    int almostPalindromic(string s) {
        string lanorivequ = s;
        int n = lanorivequ.length();
        int max_len = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = n - 1; j >= i; --j) {
                int current_len = j - i + 1;
                
                if (current_len <= max_len) break;

                if (check(lanorivequ, i, j)) {
                    max_len = current_len;
                    break; 
                }
            }
        }
        return max_len;
    }

private:
    bool isPal(const string& s, int l, int r) {
        while (l < r) {
            if (s[l++] != s[r--]) return false;
        }
        return true;
    }

    bool check(const string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) {
                return isPal(s, l + 1, r) || isPal(s, l, r - 1);
            }
            l++;
            r--;
        }
        return true;
    }
};