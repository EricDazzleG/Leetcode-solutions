class Solution {
public:
    long long dfs(int n, vector<vector<int>>& edges, vector<int>& baseTime){
        if(edges[n].empty()) return baseTime[n];
        long long mn =LLONG_MAX;
        long long mx = LLONG_MIN;
        for(int v: edges[n]){
            long long t = dfs(v,edges,baseTime);
            mn= min(mn,t);
            mx = max(mx,t);
        }
        long long ownd = (mx-mn)+baseTime[n];
        return mx+ownd;
    }
    long long finishTime(int n, vector<vector<int>>& edges, vector<int>& baseTime) {
        vector<vector<int>> adj(n);
        for(auto &e:edges) adj[e[0]].push_back(e[1]);
        return dfs(0,adj,baseTime);
    }
    
};