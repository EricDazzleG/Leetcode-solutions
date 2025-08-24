class Solution {
public:
    void dfs(int room,vector<vector<int>>& rooms,vector<bool>& visit){
        visit[room]=true;
        for(int key: rooms[room]){
            if(!visit[key]){
                dfs(key,rooms,visit);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visit(rooms.size(),false);
        dfs(0,rooms,visit);

        for(auto x: visit ){
            if(x==false){
                return false;
            }
        }
        return true;
    }
};