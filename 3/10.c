#include <stdio.h>

int main() {
    int matrix[100][100];
    int m;
    int n;
    int k = 0;
    int l = 0;
    int num;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    while (k < m && l < n) {
        for (int i = k; i < n; i++) {
            printf("%d", matrix[k][i]);
            if (k != (m - 1) || i != (n - 1)) {
                printf(" ");
            }
        }
        k++;
        for (int i = k; i < m; i++) {
            printf("%d", matrix[i][n - 1]);
            if (i != (m - 1) || k != n) {
                printf(" ");
            }
        }
        n--;
        if (k < m) {
            for (int i = n - 1; i >= l; i--) {
                printf("%d", matrix[m - 1][i]);
                if (i != (k - 1) || k != (m - 1)) {
                    printf(" ");
                }
            }
            m--;
        }
        if (l < n) {
            for (int i = m - 1; i >= k; i--) {
                printf("%d", matrix[i][l]);
                if (i != k || l != (n - 1)) {
                    printf(" ");
                }

            }
            l++;    
        }        
    }
    return 0;
}