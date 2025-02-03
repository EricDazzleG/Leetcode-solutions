class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1;
        if (n < 0) {
            x = 1 / x;  
            if (n == INT_MIN) { 
                n += 1;          
                return x * myPow(x, -n);
            }
            n = -n;  
        }
        double ans = 1.0;
        while (n > 0) {
            if (n % 2 == 1) ans *= x; 
            x *= x;  
            n /= 2;  
        }
        return ans;
    }
};
