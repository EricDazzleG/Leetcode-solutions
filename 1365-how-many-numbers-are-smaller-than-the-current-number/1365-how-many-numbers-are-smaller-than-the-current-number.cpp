class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int alln[101]={0};
        vector<int> ans(nums.size(),0);
        for(int x: nums){
            alln[x]++;
        }
        for(int i =1;i<101;i++){
            alln[i]+= alln[i-1];
        }
        for(int i =0;i<nums.size();i++){
            int v = nums[i];
            if(v==0) ans[i]=0;
            else{
                ans[i]=alln[v-1];
            }
        }
        return ans;
    }
};