#include <stdio.h>
#include <string.h>
void swap (char *b, char *c);

int main() 
{
    char name[10][21];
    int i;
    int j;
    int l;
    int m = 10;
    for (i = 0; i < m; i++) {
        scanf("%s", name[i]);    
    }
    for (j = 0; j < m; j++) {
        for (i = 0; i < m -1; i ++) {
            if(strcmp(name[i], name[i + 1]) > 0){
                for (l = 0; l < 20; l++) {  
                    swap(&name[i][l], &name[i + 1][l]);   
				}
            }
        }
    }
    for (i = 0; i < m; i++) {
        printf("%s", name[i]);
        if(i<9){
            printf("\n");
        }    
    }
    return 0;
}

void swap (char *b, char *c) 
{
    int temp;
    temp = *b;
    *b= *c;
    *c = temp;
}