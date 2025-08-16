class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> count(n+1,0);
        for(auto &x : trust){
            count[x[0]]--;
            count[x[1]]++;
        }
        for(int i =0;i<n;i++){
            if(count[i+1]==n-1){
                return i+1;
            }
        }
        return -1;
    }
};