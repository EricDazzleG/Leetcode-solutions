class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<>> p;
        for(auto x: nums){
            p.push(x);
        }
        vector<int> ans;
        while(!p.empty()){
            ans.push_back(p.top());
            p.pop();
        }
        return ans;
    }
};