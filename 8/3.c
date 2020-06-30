#include <stdio.h>
#include <string.h>

int main() 
{
    int n, i;
    int max = 0;
    int current;
    char maxName[200];
    char name[200];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        gets(name);
        current = strlen(name);
        if (current > max) {
           max = current;
           strcpy(maxName, name);
        }
    }
    printf("%s",maxName);
    return 0;
}