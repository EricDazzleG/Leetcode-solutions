class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minval = INT_MAX;
        int minodd = INT_MAX;
        int odd = 0;
        for(int x: nums1){
            if(x%2!=0){
                odd++;
                if(x<minodd) minodd = x;
            }
            if(x<minval) minval = x;
        }
        if(odd==0) return true;
        if(minval%2!=0) return true;
        return false; 
    }
};