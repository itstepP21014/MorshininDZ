#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    double x=-2.0;
    double result=0.0, adding=1.0, eps=1e-4;
    int n=1;


    printf("\t\t\t\t  EXP(X)\n\tNumber\t\t My exp\t\t Exp\t\tDifference\n\n");
    while(x<=2.10000)
    {
        while(fabs(adding)>=eps)
        {
            result+=adding;
            adding*=x/n;
            ++n;
        }
        printf("\t%- f\t% f\t %f\t% f\n",x , result, exp(x), result-exp(x));
        x+=0.1;
    }
    return 0;
}
