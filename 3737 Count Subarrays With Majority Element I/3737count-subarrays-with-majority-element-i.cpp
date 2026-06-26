class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        long long  ans=0;
        long long presum=0;

        int n = nums.size();
        int cnt=n;
        vector<int>pref(2*n+1,0);
        pref[n]=1;
        for(int x: nums){
            if(x==target){
                
                presum+=pref[cnt];
                cnt++;
                pref[cnt]++;
            }
            else{
                cnt--;
                presum-=pref[cnt];
                ++pref[cnt];
            }
            ans+=presum;
        }
        return ans;
    }

};