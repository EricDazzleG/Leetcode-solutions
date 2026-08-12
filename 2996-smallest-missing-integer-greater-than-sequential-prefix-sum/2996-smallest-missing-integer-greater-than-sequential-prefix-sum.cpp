class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int seq = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1) seq+=nums[i];
            else break;
        }
        vector<bool> hasht(1276,false);

        for(int x: nums){
            hasht[x]=true;
        }
        while(hasht[seq]){
            seq++;
        }
        return seq;
    }
};