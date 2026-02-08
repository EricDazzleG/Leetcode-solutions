class Solution {
public:
    long long memo[101][101][101];
    bool visited[101][101][101];
    const long long INF = 1e18; 

    long long solve(int i, int j, int k, int n, int m, vector<int>& nums1, vector<int>& nums2) {
        
        if (k == 0) return 0;
        
        if (i == n || j == m) return -INF;
        
        if (visited[i][j][k]) return memo[i][j][k];

        long long res = solve(i + 1, j, k, n, m, nums1, nums2);
        
        
        res = max(res, solve(i, j + 1, k, n, m, nums1, nums2));

       
        long long product = (long long)nums1[i] * nums2[j];
        long long next_step = solve(i + 1, j + 1, k - 1, n, m, nums1, nums2);
        
        if (next_step != -INF) {
            res = max(res, product + next_step);
        }

        visited[i][j][k] = true;
        memo[i][j][k] = res;
        return res;
    }
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector <int> xalur = nums1;
        int n = nums1.size();
        int m = nums2.size();

        for(int i =0;i<=n;++i){
            for(int j = 0;j<=m;++j){
                for(int r =0;r<=k;++r){
                    visited[i][j][r]= false;
                }
            }
        }
        return solve(0,0,k,n,m,nums1,nums2);
    }
};