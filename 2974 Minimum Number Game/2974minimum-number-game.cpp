class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;
        priority_queue<int,vector<int>,greater<>> p;
        for(auto x: nums){
            p.push(x);
        }
        while(!p.empty()){
            int x = p.top();
            p.pop();
            int y = p.top();
            ans.push_back(y);
            ans.push_back(x);
            p.pop();

        }
        return ans;

    }
};