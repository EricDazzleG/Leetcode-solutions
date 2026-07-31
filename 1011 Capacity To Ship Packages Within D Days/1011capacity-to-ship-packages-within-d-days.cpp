class Solution {
public:
bool canship(vector<int>& weights, int days, int mid){
    int d = 1;   
    int t = 0;

    for(int x: weights){
        if(t + x > mid){   
            d++;
            t = x;
        } else {
            t += x;
        }
        if(d > days) return false;
    }
    return true;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low = INT_MIN;
        int high = 0; 
        for(int x: weights){
            low = max(x,low);
            high+=x;
        }
        int ans = 0;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(canship(weights,days,mid)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;


    }
};