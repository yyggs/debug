#include <stdio.h>

int main()
{
    int matrix[100][100];
    int m, n;

    scanf("%d%d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int start = 0;
    int row = m;
    int column = n;

    while (start < column && start < row) {
        if (n == 1) {
            for (int i = 0; i < m; i++) {
                if (i == m - 1) {
                    printf("%d", matrix[i][0]);
                } else {
                    printf("%d ", matrix[i][0]);
                }
            }
        } else if (m == 1) {
            for (int j = 0; j < n; j++) {
                if (j == n - 1) {
                    printf("%d", matrix[0][j]);
                } else {
                    printf("%d ", matrix[0][j]);
                }
            }
        } else {
            row = 1;
            column = 1;
            while (row <= m - row + 1 && column <= n - column + 1) {
                for (int i = column; i <= n - column + 1; i++) {
                    printf("%d", matrix[row - 1][i - 1]);
                    start++;
                    if (start != m * n) {
                        printf(" ");
                    }
                }
                for (int i = row + 1; i <= m - row + 1; i++) {
                    printf("%d", matrix[i - 1][n - column]);
                    start++;
                    if (start != m * n) {
                        printf(" ");
                    }
                }
                if (row != m - row + 1) {
                    for (int i = n - column; i >= column; i--) {
                        printf("%d", matrix[m - row][i - 1]);
                        start++;
                        if (start != m * n) {
                            printf(" ");
                        }
                    }
                }
                if (column != n - column + 1) {
                    for (int i = m - row; i >= row + 1; i--) {
                        printf("%d", matrix[i - 1][column - 1]);
                        start++;
                        if (start != m * n) {
                            printf(" ");
                        }
                    }
                }
                row++;
                column++;
            }
        }
        break;
    }
    return 0;
}