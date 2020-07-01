#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double i = 0;
    int x;
    int y;
    int m = 1;
    int b = 1;
    long long double sum = 1;
    long long double sum1 = 1;
    for (x = 0; x <= (n / 2); x++) {
        for (y = 0; y <= (n / 3); y++) {
            if (x * 2 + y * 3 == n) {
                for (int j = x + y; j > y; j--) {
                    sum *= (double)j;
                }
                for (int k = x; k >= 1; k--) {
                    sum1 *= (double)k;
                }
                i += (sum / sum1);
                sum = 1;
                sum1 = 1;
            }
        }
    }
    printf("%lf", i);
    return 0;
}