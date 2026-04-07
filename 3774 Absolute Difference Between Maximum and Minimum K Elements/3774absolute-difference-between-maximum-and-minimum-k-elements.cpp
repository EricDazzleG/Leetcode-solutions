class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l =0, s =0;
        int n = nums.size();
        for(int i =0;i<n && k;i++){
            s = s+nums[i];
            l = l+nums[n-1-i];
            k--;
        }
        return abs(l-s);
    }
};