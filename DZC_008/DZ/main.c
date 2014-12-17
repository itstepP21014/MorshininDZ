#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x;
    double result=0.0, adding=1.0,eps=1e-4;
    int n=1;

    scanf("%lf",&x);

    while(fabs(adding)>=eps)
    {
        result+=adding;
        adding*=x/n;
        ++n;
    }
    printf("myexp=%f, exp=%f, diff=%f",exp(x),result, result-exp(x));
    return 0;
}
