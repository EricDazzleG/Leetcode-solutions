class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        if(nums1.size()%2==1){
            int index = nums1.size()/2;
            ans = nums1[index];
        }
        else{
            int index = nums1.size()/2;
            ans = (nums1[index]+nums1[index-1])/2.0;
        }
        return ans;
    }
};