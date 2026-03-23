class Solution {
public:
    int count(vector<int>& nums, int target, int i ,vector<unordered_map<int,int>>& dp ){
        if(i==-1){
            if(target==0) return 0;
            return -1;
        }
        if(dp[i].count(target)) return dp[i][target];
        int take = -1;
        int temp = count(nums,target^nums[i],i-1,dp);
        if(temp!=-1){
            take = temp +1;
        }
        int nottake = count(nums,target,i-1,dp);
        dp[i][target] = max(take,nottake);
        return dp[i][target];
    }


    int minRemovals(vector<int>& nums, int target) {
        int n = nums.size();
        vector<unordered_map<int,int>>dp(n,unordered_map<int,int>());
        int temp =count(nums,target,n-1,dp);
        if(temp==-1) return -1;
        return n-temp;
    }
};