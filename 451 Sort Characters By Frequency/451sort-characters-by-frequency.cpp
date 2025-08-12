class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for (char x : s) m[x]++;

        priority_queue<pair<int,char>> pq;
        for (auto &it : m) pq.push({it.second, it.first});

        string ans;
        while(!pq.empty()){
            ans.append(pq.top().first,pq.top().second);
            pq.pop();
        }
        return ans;
    }
};