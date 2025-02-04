class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxi=nums[0];int ans=nums[0];
        for(int i=0;i<nums.size()-1;i++){
            if(nums.size()<=1){
                return nums[0];
            }
            if(nums[i]<nums[i+1]){
                maxi=maxi+nums[i+1];
            }
            else if(nums[i]>nums[i+1]){
                maxi=nums[i+1];
            }
            else{
                maxi=nums[i];
            }
            ans = max(ans,maxi);

        }
        return ans;
    }
};