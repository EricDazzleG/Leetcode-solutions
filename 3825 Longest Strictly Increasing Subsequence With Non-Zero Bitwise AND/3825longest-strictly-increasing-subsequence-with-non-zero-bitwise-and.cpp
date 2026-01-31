class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int maxlen=0;
        for(int bit=0;bit<31;++bit){
            vector<int> filtered;
            for(int x: nums){
                if((x>>bit)&1) filtered.push_back(x);
            }
            vector<int> tails;
            for(int x: filtered){
                auto it = lower_bound(tails.begin(),tails.end(),x);
                if(it==tails.end()) tails.push_back(x);
                else *it = x;
            }
            maxlen = max(maxlen,(int)tails.size());
        }
        return maxlen;
    }
};