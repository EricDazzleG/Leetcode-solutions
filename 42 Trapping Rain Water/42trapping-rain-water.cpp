class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        int n = height.size();
        int prefmax[n],sufmax[n];
        prefmax[0]=height[0];
        sufmax[n-1] = height[n-1];
        for(int i =1;i<n;i++){
            prefmax[i] = max(prefmax[i-1],height[i]);
        }
        for(int i = n-2;i>=0;i--){
            sufmax[i] = max(sufmax[i+1],height[i]);
        }
        for(int i =1;i<n-1;i++){
            ans+=min(prefmax[i],sufmax[i])-height[i];
        }
        return ans;
    }
};