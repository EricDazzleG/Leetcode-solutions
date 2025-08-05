class Solution {
public:
    int thirdMax(vector<int>& nums) {
       sort(nums.begin(),nums.end(),greater<int>());
       if(nums.size()<3){
        return nums[0];
       } 
       unordered_set <int> sets;
       for(int num:nums){
            sets.insert(num);
            if(sets.size()==3){
                return num;
            }
       }
       return *max_element(nums.begin(),nums.end());
    }
};