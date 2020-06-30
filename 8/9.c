#include <stdio.h>
#include <string.h>

int main() {
    int n, k = 0;
    int i, j;
    scanf("%d\n", &n);
    char string[n][10000];
    for (i = 0; i < n; i++){
        for (j = 0; j < 10000; j++){
            scanf("%c", &string[i][j]);
            if (string[i][j] == '\n'){
                string[i][j] = '\0';
                break;
            }
        }
    }
    char str[10000];
    for (i = 0; i < n-1; i++) {
        if (strlen(string[i]) > strlen(string[i+1])) {
            strcpy(str, string[i]);
            strcpy(string[i], string[i+1]);
            strcpy(string[i+1], str);
        }
        if (strlen(string[i]) == strlen(string[i+1])) {
            k++;
        }
    }
    if (k == n - 1) {
        printf("%s", string);
    } else {
        printf("%s", string[n - 1]);
    }
    return 0;
}