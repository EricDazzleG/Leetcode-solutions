class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        if(n<=1) return {0};
        for(int i =0;i<nums.size();i++){
            int par =0;
            for(int j =i+1;j<nums.size();j++){
                if(nums[i]%2){
                    if(!(nums[j]%2)){
                        par++;
                    }
                }
                if(!(nums[i]%2)){
                    if(nums[j]%2){
                        par++;
                    }
                }

                
            }
            ans.push_back(par);
        }
        return ans;
    }
};