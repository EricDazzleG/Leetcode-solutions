class Solution {
public:
    string triangleType(vector<int>& nums) {
        int x= nums[0];
        int y= nums[1];
        int z= nums[2];
        if(x+y<=z || x+z<=y || y+z<=x){
            return "none";
        }
        if(x==y && x==z && z==x) return "equilateral";
        else if(x==y || y==z || z==x) return "isosceles";
        else return "scalene";
    }
};