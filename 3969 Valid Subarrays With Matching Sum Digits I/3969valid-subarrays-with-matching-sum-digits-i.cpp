class Solution {
public:
    int firstd(long long x){
        while(x>=10) x=x/10;
        return x;
    }
    int countValidSubarrays(vector<int>& nums, int x) {
        int n = nums.size();
        int ans = 0;
        for(int i =0;i<n;i++){
            long long sum =0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum%10==x && firstd(sum)==x) ans++;
            }
        }
        return ans;
    }
};