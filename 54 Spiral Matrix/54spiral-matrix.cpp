class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column= matrix[0].size();

        vector<int> ans;
        int strow=0;
        int stcol=0;
        int enrow=row-1;
        int encol=column-1;

        int count=0;
        int total = row*column;

        while(count<total){
            for(int index = stcol;count<total && index<=encol;index++){
                ans.push_back(matrix[strow][index]);
                count++;
            }
            strow++;

            for(int index = strow;count<total && index<=enrow;index++){
                ans.push_back(matrix[index][encol]);
                count++;
            }
            encol--;

            for(int index = encol;count<total && index>=stcol;index--){
                ans.push_back(matrix[enrow][index]);
                count++;
            }
            enrow--;

            for(int index = enrow;count<total && index>=strow;index--){
                ans.push_back(matrix[index][stcol]);
                count++;
            }
            stcol++;
        }
        return ans;
        
    }
};