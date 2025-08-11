class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<>> p;
        
        for(int i =0;i<points.size();i++){
            int x = points[i][0];
            int y = points[i][1];
            int distance = x*x+y*y;
            p.push({distance,points[i]});

        }
        for(int i =0;i<k && !p.empty();i++){
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;
    }
};