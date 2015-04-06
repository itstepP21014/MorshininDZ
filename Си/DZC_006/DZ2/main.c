#include <stdio.h>
#include <stdlib.h>

int main()
{
    int one, two, sum, divisible;

    printf("Enter the number two\n:");
    scanf("%d",&one);
    printf("Enter the number two\n:");
    scanf("%d",&two);

    if( one==0 || two == 0)
    {
        printf("\nLeast common multiple 1\n");
    }
    else
    {
        if (one > two)
        {
            divisible=one%two;
            if(divisible == 0)
            {
                divisible=1;
            }
            sum=one*two/divisible;
            printf("\nLeast common multiple %d \n", sum);
        }
        else
        {
            divisible=two%one;
            if(divisible == 0)
            {
                divisible=1;
            }
            sum=two*one/divisible;
            printf("\nLeast common multiple %d\n", sum);
        }
    }

    return 0;
}
