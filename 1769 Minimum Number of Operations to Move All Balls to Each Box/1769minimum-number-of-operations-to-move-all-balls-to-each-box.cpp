class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.length();
        vector<int> ans(n,0);
        for(int i =0;i<boxes.length();i++){
            int dist = 0;
            for(int j =0;j<boxes.length();j++){
                if(boxes[j]=='1') dist+=abs(j-i);
            }
            ans[i]=dist;
        }
        return ans;
            
    }
};