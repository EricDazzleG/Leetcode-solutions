class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int mini = 0;
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]%3==1){
                mini = mini+1;
            }
            if(nums[i]%3==2){
                mini = mini+1;
            }
            
        }
        return mini;
    }
};