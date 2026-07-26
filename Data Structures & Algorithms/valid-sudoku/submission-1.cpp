class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if (checkRow(board) && checkCol(board) && checkBox(board)) {
            return true;
        } else {
            return false;
        }
    }
    bool checkRow(vector<vector<char>> grid) {
        for (int row = 0; row < 9; row++) {
            unordered_set<int> s;
            for (int col = 0; col < 9; col++) {
                if (grid[row][col] == '.') {
                    continue;
                }
                if (s.find(grid[row][col]) != s.end()) {
                    return false;
                }
                s.insert(grid[row][col]);
            }
        }
        return true;
    }
    bool checkCol(vector<vector<char>> grid) {
        for (int col = 0; col < 9; col++) {
            unordered_set<int> s;
            for (int row = 0; row < 9; row++) {
                if (grid[row][col] == '.') {
                    continue;
                }
                if (s.find(grid[row][col]) != s.end()) {
                    return false;
                }
                s.insert(grid[row][col]);
            }
        }
        return true;
    }
    bool checkBox(vector<vector<char>> grid) {
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                unordered_set<int> s;
                for (int sr = i; sr < i + 3; sr++) {
                    for (int sc = j; sc < j + 3; sc++) {
                        if (grid[sr][sc] == '.') {
                            continue;
                        }
                        if (s.find(grid[sr][sc]) != s.end()) {
                            return false;
                        }
                        s.insert(grid[sr][sc]);
                    }
                }
            }
        }
        return true;
    }
};
