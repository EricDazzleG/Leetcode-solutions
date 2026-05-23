class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int r = 0, t = n;

        while(n > 0){
            int rem = n % 10;
            r = r * 10 + rem;
            n /= 10;
        }

        int mini = min(r, t);
        int maxi = max(r, t);

        int sum = 0;

        for(int i = mini; i <= maxi; i++) {
            if(i < 2) continue;

            bool prime = true;

            for(int j = 2; j * j <= i; j++) {
                if(i % j == 0) {
                    prime = false;
                    break;
                }
            }

            if(prime)
                sum += i;
        }

        return sum;
    }
};