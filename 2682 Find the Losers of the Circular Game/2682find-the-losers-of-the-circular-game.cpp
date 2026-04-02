class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int> vis(n,0);
        vector<int> ans;
        int pos =0;
        int step = 1;
        while(!vis[pos]){
            vis[pos] = 1;
            pos = (pos+(step*k))%n;
            step++;

        }

        for(int i =0;i<n;i++){
            if(vis[i]==0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};