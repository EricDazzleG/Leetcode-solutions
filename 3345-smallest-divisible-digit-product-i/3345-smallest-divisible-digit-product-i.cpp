class Solution {
public:
    int func(int x){
        int ans = 1;
        while(x!=0){
        int rem = x%10;
        ans*=rem;
        x=x/10;
        }
        return ans;
    }
    int smallestNumber(int n, int t) {
        if(n%10==0) return n;
        for(int i = n;i<n+10;i++){
            if(func(i)%t==0) return i;
        }
        return 0;
    }
};