class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(int num: nums){
            m[num]++;
        }
        priority_queue<pair<int,int>> p;
        for(auto &x : m){
            p.push({x.second,x.first});
        }
        for(int i =0;i<k;i++){
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;
    }
};