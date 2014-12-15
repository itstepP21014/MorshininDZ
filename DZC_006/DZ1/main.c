#include <stdio.h>
#include <stdlib.h>

int main()
{
    int one, two, sum;

    printf("Enter the number two\n:");
    scanf("%d",&one);
    printf("Enter the number two\n:");
    scanf("%d",&two);

    if( one==0 || two == 0)
    {
        printf("should be conducted in both numbers >0");
    }
    else
    {
        if (one > two)
        {
            sum=one%two;
            printf("\nResidue %d greatest common divisor %d\n", sum, two);
        }
        else
        {
            sum=two%one;
            printf("\nResidue %d greatest common divisor %d\n", sum, one);
        }
    }

    return 0;
}
