class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        int mincost = 0;
        vector<bool>visited(n,false);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;
        unordered_map<int,int> cache;
        pq.push({0,0});
        while(!pq.empty()){
            auto tp = pq.top();
            pq.pop();
            int cost = tp.first;
            int u = tp.second;
            if(visited[u]){
                continue;
            }
            visited[u]=true;
            mincost+=cost;
            for(int i =0;i<n;i++){
                if(!visited[i]){
                    int dist = abs(points[u][0]-points[i][0])+ abs(points[u][1]-points[i][1]);
                    if(cache.find(i)==cache.end()|| dist<cache[i]){
                        cache[i]=dist;
                        pq.push({dist,i});
                    }
                }
            }
        }
        return mincost;
    }
};