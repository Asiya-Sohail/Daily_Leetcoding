class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9), col(9), square(9);
        for (int i=0; i<9; i++) {
            for (int j=0; j<9; j++) {
                char num = board[i][j];
                if (num == '.') 
                    continue;

                if (row[i].find(num) != row[i].end())
                    return false;
                row[i].insert(num);

                if (col[j].find(num) != col[j].end())
                    return false;
                col[j].insert(num);

                int ind = (i/3) * 3 + (j/3);
                if (square[ind].find(num) != square[ind].end())
                    return false;
                square[ind].insert(num);

            }
        }
        return true;
    }
};