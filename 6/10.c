#include <stdio.h>
#include <string.h>

int main() {
    char pms[3];
    char change_pms[100][2];
    int i;
    i = 0;
    int j;
    int a;
    a = 0;
    int b;
    b = 0;
    int c;
    c = 0;
    scanf("%s", pms);
    for (i = 0; i < 3; i++) {
        if (pms[i] == 'r') {
            a += 4;
        } else if (pms[i] == 'w') {
            a += 2;
        } else if (pms[i] == 'x') {
            a += 1;
        } 
    }
    i = 0;
    char temp[3];
    while (scanf("%s", temp) != EOF) {
        strcpy(change_pms[i],temp);
        i++;
    }
    c = i;
    for (i = 0; i < c; i++) {
        j = 0;
        if (change_pms[i][j] == '+') {
            if (change_pms[i][j + 1] == 'r') {
               b += 4;   
            } else if (change_pms[i][j + 1] == 'w') {
                b += 2;
            } else if (change_pms[i][j + 1] == 'x') {
                b += 1;
            }
        } else if (change_pms[i][j] == '-') {
            if (change_pms[i][j + 1] == 'r') {
                b -= 4;   
            } else if (change_pms[i][j + 1] == 'w') {
                b -= 2;
            } else if (change_pms[i][j + 1] == 'x') {
                b -= 1;
            }
        }
    }
    printf("%d", a + b);
    return 0;
}