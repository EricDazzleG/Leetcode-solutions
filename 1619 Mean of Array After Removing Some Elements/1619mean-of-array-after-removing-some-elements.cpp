class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n = arr.size();
        int e = n/20;
        double ans = 0;
        sort(arr.begin(),arr.end());
        for(int i = e;i<n-e;i++){
            ans+=arr[i];
        }
        return ans/(n-2.0*e);
    }
};