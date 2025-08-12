class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> p;
        for(auto y : arr){
            p.push({abs(y-x),y});
        }
        vector<int> ans;
        for(int i =0;i<k;i++){
            ans.push_back(p.top().second);
            p.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};