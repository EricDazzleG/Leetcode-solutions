class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        vector<int> varel = nums;
        int n = varel.size();
        long long count = 0;
        int l =0;

        deque<int> min_dq,max_dq;

        for(int r =0;r<n;++r){
            while(!max_dq.empty() && varel[max_dq.back()] <= varel[r]){
                max_dq.pop_back();
            }
            max_dq.push_back(r);
            while(!min_dq.empty() && varel[min_dq.back()] >= varel[r]){
                min_dq.pop_back();
            }
            min_dq.push_back(r);

            while(l<=r ){
                long long curr_max = varel[max_dq.front()];
                long long curr_min = varel[min_dq.front()];
                long long length = ((long long)r-l+1);

                if((curr_max - curr_min)* length>k){
                    
                    if(!max_dq.empty() && max_dq.front()==l) max_dq.pop_front();
                    if(!min_dq.empty() && min_dq.front()==l) min_dq.pop_front();
                    l++;
                } else{
                    break;
                }
            }
            count+=(long long)(r-l+1);
        }
        return count;
    }
};