#include <stdio.h>
#include<math.h>


int main() {
    int matrix[100][100];
    int m, n; 
    int i, j, t, d;
    int x = 0, y = 0;
    int sum=0, max;
    scanf("%d %d", &m, &n);
    max=m*n;
    for(i=0; i<m; i++){
    	for(j=0; j<n; j++){
            //printf("%d %d\n", i, j);
            scanf("%d", &matrix[i][j]);
            //printf("%d %d\n", i, j);
        }
    }
    if(m == 1 || n == 1) {
        for(i = 0; i < m; i++) {
        	for(j = 0; j < n; j++) {
                    if(i==0 && j==0)   
                        printf("%d",matrix[i][j]);
                    else
	        printf(" %d", matrix[i][j]);
        	    }
    	}
    	return 0;
    }
    printf("%d",matrix[0][0]);
    sum++;
    while(m-x-1 > 0 && n-y-1 > 0){
        for(t = 0; t < n - 2 * y - 1; t++){
            if(x==0 && y==0 && t==0) continue;
            printf(" %d", matrix[x][y+t]);
            sum++;
            if(sum==max)  return 0;
        }
        for(t = 0; t < m - 2 * x - 1; t++){
            printf(" %d",matrix[x + t][n - y - 1]);  
            sum++;
            if(sum==max)  return 0;
        }
        for(t = n - 2 * y - 1; t > 0; t--){
            printf(" %d", matrix[m - x - 1][y + t]);
            sum++;
            if(sum==max)  return 0;
        }
        for(t = m - 2 * x - 1; t > 0; t--){
            printf(" %d",matrix[x + t][y]);
            sum++;
            if(sum==max)  return 0;
        }
        x++;
        y++;
    }	
    if(m == n && n % 2 == 1) {
        printf(" %d", matrix[(m+1)/2-1][(n+1)/2-1]);
    }
    return 0;
}

