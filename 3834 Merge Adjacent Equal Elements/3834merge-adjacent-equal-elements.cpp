class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<int> temar = nums;
        vector<long long> result;

        for(int val: temar){
            long long current = val;
            while(!result.empty() && result.back()==current){
            current+=result.back();
            result.pop_back();
        }

        result.push_back(current);
        }
        return result;
       
    }
    
};