class Solution {
public:
    void dfs(int src, int dest , vector<int> &path,vector<vector<int>>& graph){
        path.push_back(src);
        if(src==dest){
            allpaths.push_back(path);
        }
        for(auto x: graph[src]){
            dfs(x,dest,path,graph);
        }
        path.pop_back();

    }
    vector<vector<int>>allpaths;
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size()-1;
        vector<int>path;
        dfs(0,n,path,graph);
        return allpaths;
    }
};