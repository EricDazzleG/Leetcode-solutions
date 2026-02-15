class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        vector<int> minaveloru = nums;
        
        unordered_map<int, int> counts;
        for (int x : minaveloru) {
            counts[x]++;
        }
        
        unordered_map<int, int> freq_counts;
        for (auto const& [val, freq] : counts) {
            freq_counts[freq]++;
        }
        
        for (int x : minaveloru) {
            if (freq_counts[counts[x]] == 1) {
                return x;
            }
        }
        
        return -1;
    }
};