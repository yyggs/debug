#include <stdio.h>
int main() 
{
    int a,b,c,d;
    scanf("%d", &a);
    for(d = 2; d <= a; d++){
        c = 0;
        for(b = 2; b < d; b++){
            if(d % b == 0){
                c++;
            }
        }
        if(c == 0){
            printf("%d\n", d);
        }
    }
    return 0;
}