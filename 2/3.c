#include <stdio.h>
#include <string.h>
int main() {
    int matrix_a[10][10]={0};
    int matrix_b[10][10]={0};
    int mat[10][10]={0};
    int m;
    int n;
    int i;
    int j;
    int k;
    scanf("%d%d", &m,&n);
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matrix_a[i][j]);
        }
    }
    for(j=0; j<n; j++){
        for(i=0; i<m; i++){
            scanf("%d", &matrix_b[j][i]);
        }
    }
   for(i=0; i<m; i++){
        for(j=0; j<m; j++){
            for(k=0; k<n; k++){
                mat[i][j] += (matrix_a[i][k]*matrix_b[k][j]);
            }
        }
    }
    for(i=0; i<m; i++) {
        for(j=0; j<m; j++) {
            if(j == m-1)
                printf("%d\n", mat[i][j]);
            else
                printf("%d ", mat[i][j]);
        }
    }
    return 0;
}