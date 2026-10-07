class Solution {
public:
    bool canfinish(vector<int>& piles,int mid, int h){
        int time =0;
        for(int x: piles){
            time+=ceil((double)x/mid);
        }
        return time<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxspeed=0;
        for(int x: piles){
            maxspeed = max(maxspeed,x);
        }
            int left = 1;
            int right = maxspeed;
            int mid=0;
            while(left<right){
                mid = left+(right-left)/2;
                if(canfinish(piles,mid,h)){
                    right = mid;
                }
                else{
                    left = mid+1;
                }
            }
            return left;
        
    }
};