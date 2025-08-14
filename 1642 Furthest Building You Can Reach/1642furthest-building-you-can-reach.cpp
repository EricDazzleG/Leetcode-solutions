class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int, vector<int>, greater<int>> p; 
        
        for (int i = 0; i < heights.size() - 1; i++) {
            int diff = heights[i + 1] - heights[i];
            if (diff > 0) {
                p.push(diff);


                if ((int)p.size() > ladders) {
                    bricks -= p.top();
                    p.pop();
                }

    
                if (bricks < 0) {
                    return i;
                }
            }
        }
        return heights.size() - 1;
    }
};
