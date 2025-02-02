class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int column = matrix[0].size();

        int start = 0;int mid;
        int end = row*column -1;
        while(start<=end){
            mid= start + (end-start)/2;
            int element = matrix[mid/column][mid%column];
            if(element==target){
                return true;
            }
            else if(element<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }

        }
        return false;
    }
};