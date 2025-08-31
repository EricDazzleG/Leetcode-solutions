class Solution {
public:
    int dj(int city, int n, unordered_map<int,list<pair<int,int>>>& adj, int distance) {
        vector<int> dist(n, INT_MAX);
        vector<bool> visited(n, false);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

        pq.push({0, city});
        dist[city] = 0;

        while(!pq.empty()){
            auto top = pq.top();
            pq.pop();
            int dista = top.first;
            int node = top.second;

            if(visited[node]) continue;
            visited[node] = true;

            for(auto [neig, weight] : adj[node]){
                int newdist = dista + weight;
                if(newdist <= distance && newdist < dist[neig]){
                    dist[neig] = newdist;
                    pq.push({newdist, neig});
                }
            }
        }

   
        int count = 0;
        for(int i = 0; i < n; i++){
            if(i != city && dist[i] <= distance){
                count++;
            }
        }
        return count;
    }

    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        unordered_map<int,list<pair<int,int>>> adj;
        for(int i = 0; i < edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }

        int ans = -1;
        int minCity = INT_MAX;

        for(int i = 0; i < n; i++){
            int mini = dj(i, n, adj, distanceThreshold);
            if(mini <= minCity){
                minCity = mini;
                ans = i;
            }
        }
        return ans;
    }
};
