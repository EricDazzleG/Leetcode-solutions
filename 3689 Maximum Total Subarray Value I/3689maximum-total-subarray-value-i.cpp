class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int maxi=0,mini=INT_MAX;
        for(int x: nums){
            maxi = max(maxi,x);
            mini = min(mini,x);
        }
        return 1LL*(maxi-mini)*k;
    }
};