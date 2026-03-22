class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd = 0;
        for(int n : nums1){
            if(n%2!=0){
                odd++;
            }
        }
        int even = nums1.size()-odd;
        bool alleven = (odd==0)||(odd>=2);
        bool allodd = (odd>0);
        return alleven || allodd;
    }
};