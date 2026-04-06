class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<pair<int,int>> obs;
        for (auto &o : obstacles) {
            obs.insert({o[0], o[1]});
        }

        int x = 0, y = 0;
        int dir = 0;
        int maxDist = 0;

        vector<pair<int,int>> d = {
            {0,1},   
            {1,0},   
            {0,-1},  
            {-1,0}   
        };

        for (int cmd : commands) {
            if (cmd == -2) {
                dir = (dir + 3) % 4; 
            } 
            else if (cmd == -1) {
                dir = (dir + 1) % 4; 
            } 
            else {
                while (cmd--) {
                    int nx = x + d[dir].first;
                    int ny = y + d[dir].second;

                    if (obs.count({nx, ny})) break;

                    x = nx;
                    y = ny;
                    maxDist = max(maxDist, x*x + y*y);
                }
            }
        }

        return maxDist;
    }
};