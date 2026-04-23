class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> ans;
        int diff;
        int count =0;
        for(auto &s: queries){
            
            
            for(auto &x : dictionary){
                count = 0;
                for(int i =0;i<s.length();i++){
                    if(s[i]==x[i]) count++;
                }
                diff = s.length()-count;
                if(diff<=2){
                    ans.push_back(s);
                    break;
                } ;
            }
        }
        return ans;
    }
};