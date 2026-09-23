class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> n;
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        for(int x: nums){
            n.insert(x);
        }
        int maxi=0;
        for(int x: n){
            int pre=1;
            if(n.count(x-1)) continue;
            else{
                while(n.count(x++)) pre++;

            }
            maxi = max(maxi,pre);
        }
        return maxi-1;
    }
};