class Solution {
public:
    void solve(vector<vector<int>>& ans,int index,vector<int> nums){
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=index;j<nums.size();j++){
            swap(nums[index],nums[j]);
            solve(ans,index+1,nums);
            swap(nums[index],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        solve(ans,index,nums);
        return ans;
    }
};