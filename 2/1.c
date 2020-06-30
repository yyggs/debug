#include <stdio.h>

int main() 
{
    int matrix_a[10][10]={0};
    int matrix_b[10][10]={0};
    int sum[10][10]={0};
    int digit;
    int m;
    int n;
    int i;
    int j;
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix_a[i][j]);
        }
    }
    for (j = 0; j < n; j++) {
        for (i = 0; i < m; i++) {
            scanf("%d", &matrix_b[j][i]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            for (digit = 0; digit < n; digit++)
            sum[i][j] = sum[i][j] + matrix_a[i][digit] * matrix_b[digit][j];
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            printf("%d", sum[i][j]);
            if (j != m - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}