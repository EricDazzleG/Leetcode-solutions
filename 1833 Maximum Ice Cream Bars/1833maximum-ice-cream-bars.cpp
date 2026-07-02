class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=100000;
        vector<int> freq(n+1,0);
        for(int x: costs){
            freq[x]++;
        }
        int ans=0;
        for(int cost=1;cost<=n;cost++){
            if(freq[cost]==0) continue;
            int buy = min(freq[cost],coins/cost);
            ans+=buy;
            coins -= buy*cost;
            if(coins<cost) continue;
        }
        return ans;

    }
};