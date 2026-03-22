class Solution {
public:
    long long countGoodSubarrays(vector<int>& nums) {
        long long count = 0;
        int n = nums.size();
        unordered_map<int,int>lastseen;
        vector<pair<int,int>>ors;

        for(int i =0;i<n;++i){
            lastseen[nums[i]] = i;
            vector<pair<int,int>> next_ors;
            next_ors.push_back({nums[i],i});

            for(auto& p : ors){
                int v = p.first | nums[i];
                if(v==next_ors.back().first){
                    next_ors.back().second = p.second;
                }
                else{
                    next_ors.push_back({v, p.second});
                }
            }
            ors = next_ors;
            for(int k =0;k<ors.size();++k){
                int val = ors[k].first;
                int left = ors[k].second;
                int right = (k==0)? i: ors[k-1].second-1;
                if(lastseen.count(val)){
                    int pos = lastseen[val];
                    if(pos>=left){
                        int validrightbound = min(right,pos);
                        if(validrightbound>=left){
                            count+=(long long)(validrightbound - left+1);
                        }
                    }
                }
            }
        }
        return count;
    }
};