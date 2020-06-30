#include <stdio.h>
#include <string.h>

int main() {
    char string[4];
    char temp[3];
    int  current = 0;
    int  req = 0, i;
    scanf("%s", string);
    for (i = 0; i < 3; i++) {
        if (string[i] == 'r') {
            current += 2 * 2;
        } else if (string[i] == 'w') {
            current += 2;
        } else if (string[i] == 'x') {
            current += 1;
        }
    }
    while (scanf("%s", temp) != EOF) {
        if (temp[0] == '+' && temp[1] == 'x') {
            current += 1;
        }
        if (temp[0] == '-' && temp[1] == 'x') {
            current -= 1;
        }
        if (temp[0] == '+' && temp[1] == 'r') {
            current += 2 * 2;
        } 
        if (temp[0] == '-' && temp[1] == 'r') {
            current -= 2 * 2;
        } 
        if (temp[0] == '+' && temp[1] == 'w') {
            current += 2;
        }
        if (temp[0] == '-' && temp[1] == 'w' ){
            current -= 2;
        }
    }
    printf("%d\n", current);
    return 0;
}