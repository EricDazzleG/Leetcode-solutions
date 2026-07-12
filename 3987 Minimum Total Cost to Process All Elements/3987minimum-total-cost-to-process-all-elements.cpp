class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long ops=0;
        long long res=k;
        long long cost=0;
        const long long MOD = 1e9+7;
        for(int x:nums){
            if(res<x){
                long long m = (x-res+k-1)/k;
                unsigned __int128 sum = (unsigned __int128)(2*ops+m+1)*m/2;
                cost=(cost+(sum%MOD))%MOD;
                ops+=m;
                res+=m*k;
            }
            res-=x;
        }
        return cost;
    }
};