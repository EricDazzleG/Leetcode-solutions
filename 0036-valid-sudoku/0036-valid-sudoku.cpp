class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n =9;
        vector<unordered_set<char>> row(n);
        vector<unordered_set<char>> col(n);
        vector<unordered_set<char>> box(n);
        for(int i=0;i<board.size();i++){
            for(int j =0;j<board[0].size();j++){
                int val = board[i][j];
                if(val=='.') continue;
                if(row[i].count(val)) return false;
                row[i].insert(val);
                if(col[j].count(val)) return false;
                col[j].insert(val);
                int index = (i/3)*3+j/3;
                if(box[index].count(val)) return false;
                box[index].insert(val);


            }
        }
        return true;
    }
};