class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2){
            return 0;
        }
        sort(begin(nums),end(nums));
        int diff=0,ans=0;
        for(int i=1;i<nums.size();i++){
            diff=nums[i]-nums[i-1];
            ans=max(diff,ans);

        }
        return ans;

    }
};