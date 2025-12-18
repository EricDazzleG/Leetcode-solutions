class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-2);
        return solve(dp,coins,amount);
    }

    int solve(vector<int> & dp,vector<int>& coins,int amount){
         if(amount<0){
            return -1;
        }
        if(amount==0){
            return 0;
        }
        if(dp[amount]!=-2){
            return dp[amount];
        }
        int mini = INT_MAX;
        for(int coin: coins){
            int res = solve(dp,coins, amount-coin);
            if(res>=0 && res<mini){
                mini = 1+res;
            }
        }
        dp[amount] = (mini==INT_MAX) ? -1:mini;
        return dp[amount];
    }

};