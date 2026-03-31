class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int,int> c;
        for(auto num: nums){
            c[num]++;
        }
        set<int>uni(nums.begin(),nums.end());
        vector<int> v(uni.begin(),uni.end());
        //for(auto it: c) uni.push_back(it.first);
        //sort(uni.begin(),uni.end());
        for(int i =0;i<uni.size();i++){
            for(int j =i+1;j<uni.size();j++){
                int x = v[i];
                int y = v[j];
                if(c[x]!=c[y]) return {x,y};
            }
        }
        return {-1,-1};
    }
};