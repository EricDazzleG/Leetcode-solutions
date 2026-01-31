class Solution {
public:
    long long minPartitionScore(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> prefix(n+1,0);
        for(int i =0;i<n;++i) prefix[i+1]=prefix[i]+nums[i];
        auto getvalue = [&](int i,int j){
            long long s = prefix[j]-prefix[i];
            return s*(s+1)/2;
        };
        vector<long long>dp(n+1,2e18);
        dp[0]=0;
        for(int i=1;i<=k;++i){
            vector<long long> nextdp(n+1,2e18);
            auto compute = [&](auto self,int l, int r, int optl, int optr)->void{
                if(l>r) return;
                int mid = l+(r-l)/2;
                int best_p = optl;
                for(int p = optl;p<=min(mid-1,optr);++p){
                    long long val = dp[p]+getvalue(p,mid);
                    if(val<nextdp[mid]){
                        nextdp[mid]=val;best_p=p;
                    }
                }
                self(self,l,mid-1,optl,best_p);
                self(self,mid+1,r,best_p,optr);
            };
            compute(compute,1,n,0,n-1);
            dp = move(nextdp);
        }
        return dp[n];
    }
};