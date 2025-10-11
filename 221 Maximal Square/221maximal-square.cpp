class Solution {
public:
    int solve(vector<vector<char>>& matrix, int i,int j,int& maxi,vector<vector<int>>&dp){
        if(i>=matrix.size()||j>=matrix[0].size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int top = solve(matrix,i,j+1,maxi,dp);
        int diagonal = solve(matrix,i+1,j+1,maxi,dp);
        int left = solve(matrix,i+1,j,maxi,dp);
        if(matrix[i][j]=='1'){
            dp[i][j] = 1+min({top,left,diagonal});
            maxi = max(maxi,dp[i][j]);
            return dp[i][j];
        }
        else{
            return dp[i][j]=0;
        }

    }
    int solve1(vector<vector<char>>& matrix,int &maxi){
        vector<vector<int>>dp(matrix.size()+1,vector<int>(matrix[0].size()+1,0));
        for(int i = matrix.size()-1;i>=0;i--){
            for(int j = matrix[0].size()-1;j>=0;j--){
                int right = dp[i][j+1];
                int diag = dp[i+1][j+1];
                int down = dp[i+1][j];
                if(matrix[i][j]=='1'){
                    dp[i][j]= 1+min({right,diag,down});
                    maxi = max(maxi,dp[i][j]);
                }
                else{
                    dp[i][j]= 0;
                }
        
            }
           
        }
         return dp[0][0];
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int maxi = 0;
       // vector<vector<int>>dp(matrix.size(),vector<int>(matrix[0].size(),-1));
        //solve(matrix,0,0,maxi,dp);
        solve1(matrix,maxi);
        return maxi*maxi;
    }
};