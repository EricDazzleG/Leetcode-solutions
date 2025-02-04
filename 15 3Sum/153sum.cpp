class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<vector<int>> output;
        for(int i=0;i<nums.size() && nums[i]<=0;i++){
            int j= i+1;
            int k= nums.size()-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==target){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum>target){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        for(auto a : s){
            output.push_back(a);
        }
        return output;
        
        
    }
};