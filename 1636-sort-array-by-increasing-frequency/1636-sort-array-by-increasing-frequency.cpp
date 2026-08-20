class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> a;
        
        for(int x: nums){
            a[x]++;
        }
               vector<pair<int, int>> v(a.begin(), a.end());

        sort(v.begin(), v.end(), [](auto &x, auto &y) {
            if (x.second == y.second)
                return x.first > y.first;   
            return x.second < y.second;     
        });
        
        vector<int> ans;

        for(auto x: v){
            ans.insert(ans.end(),x.second, x.first);
        }
        return ans;

    }
};