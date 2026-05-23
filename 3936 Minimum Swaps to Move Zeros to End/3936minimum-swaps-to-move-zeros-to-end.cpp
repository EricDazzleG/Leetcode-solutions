class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int z =0;
        for(int i =0;i<n;i++){
            if(nums[i]==0) z++;
        }
        int ans=0;
        for(int i =0;i<n-z;i++){
            if(nums[i]==0)ans++;
        }
        return ans;
        
    }
};