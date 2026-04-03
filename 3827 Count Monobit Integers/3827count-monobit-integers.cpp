class Solution {
public:
    int countMonobit(int n) {
        if(n==0) return 1;
        int ans = 1;
        for(int i =1;i<=10;i++){
            int k = pow(2,i);
            if(k-1<=n){
                ans++;
            }
            else{
                break;
            }
        }
        return ans;
        
    }
};