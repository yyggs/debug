#include <stdio.h>
#include <string.h>

int main() 
{
    int n, i;
    char input;
    char name[1000][1000];
    char name_max[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        gets(name[i]);
    }
    strcpy(name_max, name[0]);
    for(int i = 1; i < n; i++){
        if(strlen(name_max) < strlen(name[i]))
            strcpy(name_max, name[i]);
    }
    printf("%s", name_max);
    return 0;
}