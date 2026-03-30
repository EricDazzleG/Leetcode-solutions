class Solution {
public:
    int solve(int n, vector<int> & dp){
        if(n==1) return 0;
        if(dp[n]!=-1) return dp[n];

        int ans =INT_MAX;
        for(int i =1;i<=n/2;i++){
            int temp = (n-i)*i+solve(n-i,dp)+solve(i,dp);
            ans = min(ans,temp);
        }
        dp[n] = ans;
        return dp[n];
    }
    int minCost(int n) {
        vector<int> dp(n+1,-1);
        return solve(n, dp);
        
    }
};