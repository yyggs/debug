#include <stdio.h>
#include <string.h>
int main() 
{
    int n, i, j;
    char names[1000][1001];
    char max[1001];
    
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        gets(names[i]);
    } 
    strcpy(max, names[0]);
    for (j = 0; j < n; j++) {
        if (strlen(names[j]) > strlen(max)) {
            strcpy(max, names[j]);
        }
    }
    printf("%s", max);
    return 0;
}