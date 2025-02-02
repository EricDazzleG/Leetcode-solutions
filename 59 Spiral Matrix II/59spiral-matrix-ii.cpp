class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        int row = n;
        int column= n;

        vector<vector <int>> ans(n,vector<int>(n));
        int strow=0;
        int stcol=0;
        int enrow=row-1;
        int encol=column-1;

        int count=0;
        int total = row*column;

        while(count<total){
            for(int index = stcol;count<total && index<=encol;index++){
                ans[strow][index]=count+1;
                count++;
            }
            strow++;

            for(int index = strow;count<total && index<=enrow;index++){
                ans[index][encol]=count+1;
                count++;
            }
            encol--;

            for(int index = encol;count<total && index>=stcol;index--){
                ans[enrow][index]=count+1;
                count++;
            }
            enrow--;

            for(int index = enrow;count<total && index>=strow;index--){
                ans[index][stcol]=count+1;
                count++;
            }
            stcol++;
        }
        return ans;
    }
};