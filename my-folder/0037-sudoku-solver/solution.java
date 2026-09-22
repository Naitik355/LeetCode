class Solution {

    public boolean isSafe(char[][] board, int row, int col, int k) {
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == (char)(k + '0')) return false;
            if (board[row][i] == (char)(k + '0')) return false;
            if (board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == (char)(k + '0')) return false;
        }
        return true;
    }

    public boolean solve(char[][] board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    for (int k = 1; k <= 9; k++) {
                        if (isSafe(board, i, j, k)) {
                            board[i][j] = (char)(k + '0');
                            if (solve(board))
                                return true;
                            board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    public void solveSudoku(char[][] board) {
        solve(board);
    }
}
