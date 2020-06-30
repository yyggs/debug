#include <stdio.h>
#include <string.h>
int main() 
{
    int n, j, k, i;
    char name[100][100];
    char temp[100];
    
    gets(names[i]);
    getchar();
    for(i = 0; i < n; i++){
        gets(name[i]);        
    }
 
    for(j = 0; j < n; j++){
        for (k = 0; k <= n - j; k++){
            if((strlen(name[k]) < strlen(name[k + 1]))){
                strcpy(temp, name[k]);
                strcpy(name[k], name[k + 1]);
                strcpy(name[k + 1], temp);
            }
        }
    }
    printf("%s\n", name[0]);
    return 0;
}