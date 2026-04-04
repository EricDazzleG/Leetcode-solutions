class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        long long sum=0;
        long long ans = INT_MIN;
        int mini  = INT_MAX;
        for(auto i: nums) sum+=i;
        for(int i = nums.size()-1;i>=1;i--){
        sum-=nums[i];
        mini = min(mini,nums[i]);
        long long x = sum-mini;
        ans = max(ans,x);
    }
    return ans;
    }
};