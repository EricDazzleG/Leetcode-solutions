class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> m;
        for (auto &w : arr) m[w]++;

        priority_queue<pair<int,int>> pq;
        for (auto &it : m) pq.push({it.second, it.first});

        int ans = 0;
        int size = 0;
        while(!pq.empty()){
            size+=pq.top().first;
            pq.pop();
            ans++;
            if(arr.size()/2<=size){
                break;
            }
        }
        return ans;
    
    }
};