class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count =0;
        for(int x: nums){
            while(x!=0){
                int d = x%10;
                x = x/10;
                if(d==digit) count++;
            }
        }
        return count;
    }
};