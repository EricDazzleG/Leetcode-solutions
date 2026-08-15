class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int totalxor=0;
        bool allzero=true;
        for(int x: nums){
            totalxor^=x;
            if(x>0) allzero=false;
        }
        if(totalxor>0){
            return nums.size();
        }
        return allzero? 0: nums.size()-1;
    }
};