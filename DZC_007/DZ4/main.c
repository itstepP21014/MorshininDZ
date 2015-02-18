#include <stdio.h>
#include <stdlib.h>

int main()
{
    int D;
    double x;
    double p = 1.0;

    printf("Enter double number\n:");
    scanf ("%lf",&x);
    printf("Enter number\n:");
    scanf("%d",&D);
    while (D != 0)
    {
        if (D % 2 == 0)
        {
            x *= x;
            D /= 2;
        }
        p *= x;
        D -= 1;
    }
    printf("%f",p);
    return 0;
}
