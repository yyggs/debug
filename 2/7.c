#include <stdio.h>

int main(void) {
    int mtxA[100][100], mtxB[100][100], mtxC[100][100];
    int m, n;
    for (int i = 0; i < 100; i ++) {
        for (int j = 0; j < 100; j ++) {
            mtxC[i][j] = 0;
        }
    }
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i ++) {
        for (int j = 0; j < n; j ++) {
            scanf("%d", &mtxA[i][j]);
        }
    }
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < m; j ++) {
            scanf("%d", &mtxB[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            mtxC[i][j] = 0;
            for (int k = 0; k < n; k ++) {
                mtxC[i][j] += mtxA[i][k] * mtxB[k][j];
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            j != m - 1 ? printf("%d ", mtxC[i][j]) : printf("%d", mtxC[i][j]);
            if(i != m - 1 && j == m - 1){
                printf("\n");
            }
        }
    }
    return 0;
}