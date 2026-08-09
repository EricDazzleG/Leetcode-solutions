class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n, 0));

        for (int i = 0; i < n; i++)
            dp[i][i] = 1;

        for (int len = 2; len <= n; len++) {
            for (int j = 0; j + len - 1 < n; j++) {
                int k = j + len - 1;

                if (s[j] == s[k])
                    dp[j][k] = dp[j + 1][k - 1] + 2;
                else
                    dp[j][k] = max(dp[j + 1][k], dp[j][k - 1]);
            }
        }

        return dp[0][n - 1];
    }
};