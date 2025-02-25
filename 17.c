#include <stdio.h>
#define N 8

int board[N][N];

// Function to check if a queen can be placed at board[row][col]
int isSafe(int row, int col) {
    int i, j;

    // Check the left side of the row
    for (i = 0; i < col; i++) {
        if (board[row][i])
            return 0;
    }

    // Check upper diagonal on the left side
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j])
            return 0;
    }

    // Check lower diagonal on the left side
    for (i = row, j = col; j >= 0 && i < N; i++, j--) {
        if (board[i][j])
            return 0;
    }

    return 1;
}

// Recursive function to solve N-Queens problem using backtracking
int solveNQueens(int col) {
    // If all queens are placed, return true
    if (col >= N)
        return 1;

    // Consider this column and try placing a queen in all rows one by one
    for (int i = 0; i < N; i++) {
        // Check if the queen can be placed on board[i][col]
        if (isSafe(i, col)) {
            // Place the queen
            board[i][col] = 1;

            // Recur to place the rest of the queens
            if (solveNQueens(col + 1))
                return 1;

            // If placing the queen in board[i][col] doesn't lead to a solution, remove the queen (backtrack)
            board[i][col] = 0;
        }
    }

    // If the queen cannot be placed in any row in this column, return false
    return 0;
}

// Function to print the board
void printBoard() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}

// Main function
int main() {
    // Initialize the board
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            board[i][j] = 0;
        }
    }

    if (solveNQueens(0) == 0) {
        printf("Solution does not exist for %d queens.\n", N);
    } else {
        printf("Solution for %d queens:\n", N);
        printBoard();
    }

    return 0;
}
