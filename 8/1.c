#include <stdio.h>
#include <string.h>
int main() 
{
    int n, i, z, j;
    char names[101][101];
    char max[101]={0};
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++) {
        //scanf("%s", names[i]);
        gets(names[i]);
    }
    strcpy(max, names[0]);
    for (j = 0; j < n; j++) {
        if (strlen(names[i]) > strlen(max)) {
            strcpy(max, names[i]);
        }
    }
    printf("%s\n", max);
    return 0;
}