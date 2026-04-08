class Solution {
public:
    static const int MOD = 1000000007;
    
    void solve(vector<int>& nums, int x, int y, int z, int n){
        if (z == 0) return; 

        for(int i = x; i <= y; i += z){
            nums[i] = (1LL * nums[i] * n) % MOD;
        }
    }

    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(auto &x : queries){
            solve(nums, x[0], x[1], x[2], x[3]);
        }

        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            ans ^= nums[i];
        }
        return ans;
    }
};