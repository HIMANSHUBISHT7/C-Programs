#include <stdio.h>
#include <string.h>

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to calculate the length of Longest Common Subsequence (LCS)
int lcs(char *X, char *Y, int m, int n) {
    int L[m + 1][n + 1];
    int i, j;

    // Build L[m+1][n+1] array in bottom-up fashion
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    return L[m][n]; // Return the length of LCS
}

// Main function
int main() {
    char X[] = "AGGTAB";
    char Y[] = "GXTXAYB";

    int m = strlen(X);
    int n = strlen(Y);

    printf("Longest Common Subsequence length is: %d\n", lcs(X, Y, m, n));

    return 0;
}
