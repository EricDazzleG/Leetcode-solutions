class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxi=1; int mini=1;int ans;
        for(int i=0;i<nums.size()-1;i++){
            if(nums.size()<=1){
                return nums.size()+1;
            }
            if(nums[i]<nums[i+1]){
                maxi++;
                mini=1;
            }
            else if(nums[i]>nums[i+1]){
                mini++;
                maxi=1;
            }
            else{
                mini=maxi=1;
            }
            ans = max(ans,max(maxi,mini));

        }
        return ans;
    }
};