class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,vector<int>> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]].push_back(i);
        }
        int rank =1;
        for(auto &it : mp){
            int a = it.first;
            vector<int> b = it.second;
            for(int x: b){
                arr[x]=rank;
            }
            rank++;

        }
        return arr;
    }
};