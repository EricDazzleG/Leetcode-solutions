class Solution {
public:
    int minimumK(vector<int>& nums) {
       long long low=1, high = 1e9,ans=high;
        while(low<=high){
            long long k = low+ (high-low)/2;
            long long ops = 0;
            for(int x: nums){
                ops+=(x+k-1)/k;
            }
            if(ops<=k*k){
            ans=k;
            high =k-1;
            } else{
                low = k+1;
            }
        }
        return (int)ans;
        
    }
};