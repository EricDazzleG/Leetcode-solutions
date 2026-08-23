class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int mul=1;
        int check=n;
        while(n!=0){
            int temp = n%10;
            sum+=temp;
            mul*=temp;
            n=n/10;
        }
        if(check==0) return true;
        return check%(sum+mul)==0;
    }
};