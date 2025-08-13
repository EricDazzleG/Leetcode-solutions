class Solution {
public:
    int sumof(int x){
        int ans=0;
        while(x!=0){
            int temp = x%10;
            ans+=temp;
            x=x/10;
        }
        return ans;
    }
    int maximumSum(vector<int>& nums) {
         unordered_map<int, priority_queue<int, vector<int>, greater<int>>> m;
        int ans = -1;
        for(auto num: nums){
            int s = sumof(num);
            m[s].push(num);

            if(m[s].size()>2) m[s].pop();
        }
        for(auto &x: m){
            if(x.second.size()==2){
                int a = x.second.top();
                x.second.pop();
                int b = x.second.top();
                ans = max(ans,a+b);
            }
            
        }
        return ans;
        
    }
};