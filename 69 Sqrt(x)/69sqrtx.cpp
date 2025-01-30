class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        if(x==1){
            return 1;
        }
        int s=1; int e = x-1;int result;int mid;
        
        while(s<=e){
            mid = s+ (e-s)/2;
            if(mid<=x/mid){
                result=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return result;
    }
};