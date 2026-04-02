class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        long long res = 0, n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0;i<=n/2;i++){
            res = res+ max(0,nums[i]-k);
        }
        for(int i =n/2;i<n;i++){
            res= res+ max(0,k-nums[i]);
        }
        return res;

    }
};