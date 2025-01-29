class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int left =0; int right = height.size()-1;
        while(left<right){
            int h= min(height[left],height[right]);
            int area = h*(right-left);
            if(area > maxarea){
                maxarea= area;
            }

            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return maxarea;

    }
};