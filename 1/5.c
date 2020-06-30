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
    double max;
    double min;
    double mid;
    max = 20;
    min = -20;
    mid = (max + min)/ 2;
    while(fabs(f(p,q,mid)) >= EPSILON){
        if((f(p,q,max) * f(p,q,mid)) < 0) {
            min = mid;
            mid = (mid + max)/ 2;
        }
        if((f(p,q,min) * f(p,q,mid)) < 0) {
            max = mid;
            mid = (min + max)/2;
        }
    }
    return mid;   
}

double f(int p, int q, double x) 
{
    return p * x + q;
}