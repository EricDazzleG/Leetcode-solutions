class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        map<int,pair<int,int>>mp;
        for(auto &x:series1){
            mp[x[0]].first=x[1];
        }
        for(auto &x:series2)
            mp[x[0]].second = x[1];

        int a =0,b=0;
        for(auto it = mp.rbegin();it!=mp.rend();++it){
            if(it->second.first!=0)
                a=it->second.first;
            if(it->second.second !=0)
                b=it->second.second;

            it->second.first =a;
            it->second.second =b;
        }
        vector<vector<int>> ans;
        for(auto &[time,val] : mp){
            ans.push_back({time,val.first+val.second});
        }
        return ans;
    }
};