#include <stdio.h>
#include <string.h>
void add(char);
void delete(char);
int rwx = 0;
int main() {
    char temp, temp1[100];
    scanf("%s", &temp1);
    if (temp1[0] == 'x') {
        rwx ^= (1 << 0);
    } else if (temp1[0] == 'w') {
        rwx ^= (1 << 1);
        if (temp1 == 'wx') {
            rwx ^= (1 << 0);
            rwx ^= (1 << 1);
        }
    } else if (temp1[0] == 'r') {
        rwx ^= (1 << 2);
        if (temp1[1] == 'w') {
            rwx ^= (1 << 1);
        }
        if (temp1[1] == 'x') {
            rwx ^= (1 << 0);
        }
        if (temp1[1] == 'w' && temp1[2] == 'x') {
            rwx ^= (1 << 0);
            rwx ^= (1 << 1);
        }
    }
    while (scanf("%c", &temp) != EOF) {
        if (temp == '+') {
            scanf("%c", &temp);
            add(temp);
        } else if (temp == '-') {
            scanf("%c", &temp);
            delete(temp);
        }
    }
    printf("%d", rwx);
    return 0;
}

void add(char input) 
{
    if (input == 'r' && rwx / 4 != 1) {
        rwx ^= (1 << 2);
    } else if (input == 'w' && ((rwx / 2) % 2 != 1)) {
        rwx ^= (1 << 1);
    } else if (rwx % 4 == 1 || rwx % 4 == 2) {
        rwx ^= (1 << 0);
    }
}

void delete(char input) 
{
    if (input == 'r' && rwx / 4 == 1) {
        rwx ^= (1 << 2);
    } else if (input == 'w' && ((rwx / 2) % 2 == 1)) {
        rwx ^= (1 << 1);
    } else if (rwx % 4 == 1 || rwx % 4 == 3) {
        rwx ^= (1 << 0);
    }
}
