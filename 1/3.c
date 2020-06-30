#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);

int main() 
{
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) 
{
    double max = 20.0;
    double min = -20.0;
    double m;
    while(1) {
        m = (max + min) / 2;
    double c=f(p,q,m);
        if(fabs(c) < EPSILON) {
            return m;
        } else if(f(p,q,max) * c < 0) {
            min = m;
        } else {
            max = m;
        }
    }
}

double f(int p, int q, double x) {
    return p * x + q;
}