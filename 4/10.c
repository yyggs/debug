#include <stdio.h>

int main() {
    int n = 10;
    int m;
    int numbers[10];
    int i;
    int max;
    int k;
    int j;
    int o;
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i <= 9; i++) {
        max = i;
        for (m = i; m < 9; m++) {
            if (numbers[max] < numbers[m + 1]) {
                max = m + 1;
            }
        }
        o = numbers[i];
        numbers[i] = numbers[max];
        numbers[max] = o;
    }
    for (int q = 0; q < n; q++) {
        if (q == 9) {
            printf("%d", numbers[q]);
        } else {
            printf("%d ", numbers[q]);
        }
    }
    return 0;
}