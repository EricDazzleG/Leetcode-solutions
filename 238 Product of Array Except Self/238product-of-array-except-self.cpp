class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int c = 0;
        int maxi = 1;
        int n=nums.size();
        for(int i =0;i<n;i++){
            maxi*=nums[i];
            if(nums[i]==0){
                c++;
            }
        }
        int without = 1;
        for(int i =0;i<n;i++){
            if(nums[i]==0) continue;
            else{
                without*=nums[i];
            }
        }
        vector<int> ans(n,0);
        if(c>1) return ans;
        if(c==1){
            for(int i =0;i<n;i++){
                if(nums[i]==0){
                    ans[i]= without;
                }
            }
            return ans;
        }
        for(int i =0;i<n;i++){
            ans[i]= maxi/nums[i];

        }
        return ans;
        
        
    }
};