class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans=0;
        long long sum=0;
        int x=1;
        while(n>0){
            int rem = n%10;
            if(rem!=0){
               ans = rem*x+ans;
               x=x*10; 
            }
            n=n/10;
            sum+=rem; 
        }
        return ans*sum;
    }
};