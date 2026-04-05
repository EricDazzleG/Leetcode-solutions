class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int x ,y;
        vector<int> ans;
        for(int i =0;i<s.length();i++){
            x = startPos[0]; y = startPos[1];
            int count = 0;
            for(int j =i;j<s.length();j++){
                if(s[j]=='U'){
                    if(x-1 >=0) {
                        x--;
                        count++;
                    }
                    else break;
                }
                 if(s[j]=='D'){
                    if(x+1 >=0 && x+1<n) {
                        x++;
                        count++;
                    }
                    else break;
                }
                 if(s[j]=='L'){
                    if(y-1 >=0) {
                        y--;
                        count++;
                    }
                    else break;
                }
                 if(s[j]=='R'){
                    if(y+1 >=0 && y+1<n) {
                        y++;
                        count++;
                    }
                    else break;
                }
                
            }
            ans.push_back(count);
        }
        return ans;
    }
};