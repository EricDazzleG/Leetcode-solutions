class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi =1;
        priority_queue<int> m;
        for(auto x: nums){
            m.push(x);
        }
        for(int i =0;i<2;i++){
            maxi = maxi*(m.top()-1);
            m.pop();

        }
        return maxi;
    }
};