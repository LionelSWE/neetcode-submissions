class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        // create an unordered set for seen values
        unordered_set<string> seen;

        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] != '.') {
                    // check for duplicates
                    if(!seen.insert("row" + to_string(i) + board[i][j]).second ||
                    !seen.insert("col" + to_string(j) + board[i][j]).second ||
                    !seen.insert("subMat" + to_string((i / 3) * 3 + j / 3) + board[i][j]).second) {
                        return false;
                    }
                }
            }
        }
        return true;   
    }
};
