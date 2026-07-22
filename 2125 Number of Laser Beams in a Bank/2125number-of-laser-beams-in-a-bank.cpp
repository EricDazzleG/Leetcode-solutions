class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        vector<int> a;
        for(auto x : bank){
            int c=0;
            for(auto &s: x){
                if(s=='1') c++; 
            }
            a.push_back(c);
        }
        int ans =0;
        int mul = a[0];
        for(int i =1;i<n;i++){
            if(a[i]==0){
                continue;
            } 
            ans+=mul*a[i];
            mul=a[i];

        }
        return ans;
    }
};