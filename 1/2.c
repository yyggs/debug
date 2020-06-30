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
    double max = 20.0,min = -20.0;
    double mid;
    while(1){
        mid = (max + min) / 2;
        if(fabs(f(p,q,mid) )< EPSILON){
            return mid;
        }else if(f(p,q,max) * f(p,q,mid) < 0){
            min = mid;
        }else{
            max = mid;
        }
    }
}

double f(int p, int q, double x) 
{
    return p * x + q;
}