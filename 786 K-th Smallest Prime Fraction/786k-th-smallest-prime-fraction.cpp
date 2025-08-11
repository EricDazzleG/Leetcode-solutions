class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<int> ans;
        priority_queue<pair<float,pair<int,int>>,vector<pair<float,pair<int,int>>>,greater<>> p;
        for(int i =0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                float frac = (float)arr[i]/arr[j];
                p.push({frac,{arr[i],arr[j]}});
                
            }   
            
        }
         for(int i=1;i<k && !p.empty();i++){
                p.pop();
            }

        ans.push_back(p.top().second.first);
        ans.push_back(p.top().second.second);
        return ans;
    }
};