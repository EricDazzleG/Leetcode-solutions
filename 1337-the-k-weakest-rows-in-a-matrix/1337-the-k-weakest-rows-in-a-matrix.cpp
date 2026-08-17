class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> a;
        for(int i =0;i<mat.size();i++){
            int ones=0;
            for(auto y: mat[i]){
                if(y==1)
                ones++;
            }
            a.push_back({ones,i});
        }
        sort(a.begin(),a.end());
        vector<int> ans;
        for(int i =0;i<k;i++){
            ans.push_back(a[i].second);
        }
        return ans;
    }
};