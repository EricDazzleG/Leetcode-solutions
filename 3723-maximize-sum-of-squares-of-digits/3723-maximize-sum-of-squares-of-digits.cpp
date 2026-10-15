class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int numberofnines = sum/9;
        int remaining = sum%9;
        string ans="";
        ans+= string(numberofnines,'9') + (remaining?to_string(remaining):"");
        return ans.size()<=num? ans+string(num-ans.size(),'0'):"";
    }
    
};