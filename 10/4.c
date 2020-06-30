#include <stdio.h>
int main() {
    int num;
    int digit;
    int a;
    scanf("%d",&num);
    for(digit = 2; digit <= num; digit++){
        for(a = 2; a <= digit; a++) {
            if(digit % a == 0 && a != digit) {
                break;
            }
            if(a == digit) {
                printf("%d\n",digit);
            }
        }
    }
    return 0;
}