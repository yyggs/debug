#include <stdio.h>

int main() {
    int matrix[100][100];
    int m;
    int n;
    int i;
    int j;
    int startX;
    int startY;
    int endX;
    int endY;
    startX = 0;
    startY = 0;
    endX = m;
    endY = n;
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    while (startX * 2 < m && startY * 2 < n) {
        endX = m - 1 - startX;
        endY = n - 1 - startY;
        if (startY <= endY) {
            for (j = startY; j <= endY; j++) {
                printf("%d", matrix[startX][j]);
                if (startX == endX && j == endY) {
                    break;
                }
                if (j <= endY) {
                    printf(" ");
                }
            }
        }
        if (startX < endX) {
            for (j = startX + 1; j <= endX; j++) {
                printf("%d", matrix[j][endY]);
                if (j == endX && startY == endY) {
                    break;
                }
                if (j <= endX){
                    printf(" ");
                }
            }
        }
        if (endX > startX && startY < endY) {
            for (j = endY - 1; j >= startY; j--){
                printf("%d", matrix[endX][j]);
                if (j == startY && startX == endX - 1) {
                    break;
                }
                if (j >= startY){
                    printf(" ");
                }
            }
        }
        if (endX - 1 > startX && startY < endY) {
            for (i = endX - 1; i >= startX + 1; i--){
                printf("%d", matrix[i][startX]);
                if (i == startX + 1 && endY == startY + 1) {
                    break;
                }
                if (i >= startX + 1){
                    printf(" ");
                }
            }
        }
        startX++;
        startY++;
    }
    
   
    return 0;
}