class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x = nums.size();int ans=0;
        for(int i =0;i<=x;i++){
            ans= ans^i;
        }
        for(int num : nums){
            ans=ans^num;
        }
        return ans;
     
    }
};