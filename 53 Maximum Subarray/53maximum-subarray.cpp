class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = -1;
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
            maxi = max(sum,maxi);
            if(sum<0) sum=0;


        }
        if(maxi==-1){
            maxi=INT_MIN;
            for(int i =0;i<nums.size();i++){
                maxi = max(maxi,nums[i]);
            }
        }
        return maxi;
    }
};