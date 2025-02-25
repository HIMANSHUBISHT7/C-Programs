#include <stdio.h>

#define ROW1 3
#define COL1 2
#define ROW2 COL1
#define COL2 4

int main() {
    int i, j, k;
    int a[ROW1][COL1], b[ROW2][COL2], c[ROW1][COL2];

    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < ROW2; i++) {
        for (j = 0; j < COL2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            c[i][j] = 0;
            for (k = 0; k < ROW2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}