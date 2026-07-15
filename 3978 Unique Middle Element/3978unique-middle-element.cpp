class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int m = nums[n/2];
        int c=0;
        for(int x:nums){
            if(x==m){
                c++;
            }
        }
        return c==1;
    }
};