class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x = nums[0];
        for(int i =1;i<nums.size();i++){
            x^=nums[i];
        }
        int y = x;
        unsigned int mask = (unsigned int)x & (-(unsigned int)x);
        vector<int> ans = {0,0};
        for(int num : nums){
            if((num & mask )==0){
                ans[0]^=num;
            }
            else{
                ans[1]^=num;
            }
        }
        return ans;

    }
};