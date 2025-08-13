class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> p;
        for(auto x: piles){
            p.push(x);
        }
        for(int i =0;i<k;i++){
            int temp = p.top();
            p.pop();
            p.push(ceil(temp/2.0));

        }
        int ans=0;
        while(!p.empty()){
            ans+=p.top();
            p.pop();
        }
        return ans;
    }
};