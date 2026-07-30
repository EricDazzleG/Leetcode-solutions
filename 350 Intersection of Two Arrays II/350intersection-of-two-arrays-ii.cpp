class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>ans;
        int l =0,r=0;
        int n = nums1.size(),m = nums2.size();
        while(l<nums1.size() && r<nums2.size()){
            if(nums1[l]==nums2[r]){
                ans.push_back(nums1[l]);
                l++;
                r++;
            } 
            else if(nums1[l]>nums2[r]){
                r++;
            }
            else{
                l++;
            }
        }
        return ans;
    }
};