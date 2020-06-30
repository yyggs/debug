#include <stdio.h>

int main() {
    int matrix[100][100];
    int m, n;
    int i, j;
    scanf("%d %d", &m, &n);
    int k = m * n;
    int m0 = m;
    int n0 = n;
	for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if(m == 1 || n == 1) {
        for(i = 0; i < m; i++) {
        	for(j = 0; j < n; j++) {
                if(i==0 && j==0){
                    printf("%d",matrix[i][j]);
                } else
                    printf(" %d", matrix[i][j]);
        	}
    	}
    	return 0;
    }
    i = 0;
    while(i != k) {
        for(j= n - n0; j < n0 - 1; j++) {
            printf("%d", matrix[m - m0][j]);
            i++;
            if(i == k)
                break;
            else
                printf(" ");
        }
        for(j = m - m0; j < m0 - 1; j++) {
            printf("%d", matrix[j][n0 - 1]);
            i++;
            if(i == k)
                break;
            else
                printf(" ");
        }
        for(j = n0 - 1; j > n - n0; j--) {
            printf("%d", matrix[m0 - 1][j]);
            i++;
            if(i == k)
                break;
            else
                printf(" ");
        }
        for(j = m0 - 1; j > m - m0; j--) {
            printf("%d", matrix[j][n - n0]);
            i++;
            if(i == k)
                break;
            else
                printf(" ");
        }
        n0--;
        m0--;
    }
    
    return 0;
}