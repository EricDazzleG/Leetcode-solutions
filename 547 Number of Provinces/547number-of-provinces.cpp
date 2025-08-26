class Solution {
public:

    void dfs(int city,unordered_set<int>& visited,vector<vector<int>>& isConnected){
        visited.insert(city);
        for(int i =0;i<isConnected[city].size();i++){
            int con = isConnected[city][i];
            if(con==1 && visited.find(i)==visited.end()){
                dfs(i,visited,isConnected);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_set<int> visited;
        int province = 0;
        for(int i =0;i<isConnected.size();i++){
            if(visited.find(i)==visited.end()){
                dfs(i,visited,isConnected);
                province++;
            }
        }
        return province;
    }
};