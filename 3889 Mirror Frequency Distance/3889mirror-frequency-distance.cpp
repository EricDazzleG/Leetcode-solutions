class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int> a(10),b(26);
        for(auto &x : s){
            if(x<='9' && x>='0'){
                a[x-'0']++;
            }
            else{
                b[x-'a']++;
            }
        }
        int ans= 0;
        for(int i =0;i<5;i++){
            ans+=abs(a[i]-a[9-i]) ;
        }
        for(int i =0;i<13;i++){
            ans+=abs(b[i]-b[25-i]);
        }
        return ans;
    }
};