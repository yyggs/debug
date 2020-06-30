#include <stdio.h>
#include <string.h>

int main() {
    int i, j, k;
    char name[10][20] = {0};
    for (i = 0, j = 0; i < 10; i++) {
        scanf("%s", &name[i][j]);
    }
    for (i = 0, j = 0; i < 9; i++) {
        for (k = 0, j = 0; k < (9 - i); k++) {
            if (strcmp(&name[k][j], &name[k+1][j]) > 0) {
                char temp[10];
                strcpy(temp, &name[k][j]);
                strcpy(&name[k][j], &name[k+1][j]);
                strcpy(&name[k+1][j], &temp);
            }
        }
    }
    for (i = 0, j = 0; i < 10; i++) {
        printf("%s\n", &name[i][j]);
    }
    return 0;
}