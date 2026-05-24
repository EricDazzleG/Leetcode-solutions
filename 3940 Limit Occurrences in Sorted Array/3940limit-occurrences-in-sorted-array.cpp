class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> ans;
        if(nums.empty()) return ans;
        ans.push_back(nums[0]);
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) count++;
            else count=1;
            if(count<=k) ans.push_back(nums[i]);
            
        }
        return ans;
    }
};