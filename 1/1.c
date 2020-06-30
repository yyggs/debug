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
    double min = -20;
    double max = 20;
    double xp;
    xp = (min + max) / 2;
    double c = func(p, q , xp);
        while(fabs(c) >= EPSILON)
        {
            if((c * func(p, q , min)) > 0)
            {
                min = xp;
                xp = (min + max) / 2;
                c = func(p, q , xp);
            }
            else
            {
                max = xp;
                xp = (min + max) / 2;
                c = func(p, q , xp);
            }
        }
    return xp;
}

double f(int p, int q, double x) 
{
    return p * x + q;
}
