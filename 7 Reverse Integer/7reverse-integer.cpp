class Solution {
public:
    int reverse(int x) {
        int rev=0;int rem;
        int num=x;
        while(num!=0){
            rem=num%10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && rem > 7)) return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && rem < -8)) return 0;
            rev= rev*10+rem;
            num=num/10;
        }
        return rev;

    }
};