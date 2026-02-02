class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result(nums.size()+1,0);
        for(int i =0;i<nums.size();i++){
            result[nums[i]]++;
            
        }
        int dup = 0; int miss=0;
        for(int i =1;i<result.size();i++){
            if(result[i]==2) dup=i;
            if(result[i]==0) miss=i;
        }
        return {dup,miss};
    }
};