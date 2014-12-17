#include <stdio.h>
#include <conio.h>
void main ()
{
    int x,x1, difficult=0, division=2;

    printf("Enter number\n:");
    scanf("%d",&x);

    if( 2<=x)
    {


        while(division!=x)
        {
            if(x%division == 0)
            {
                x1=x%division;
                printf("%d^%d=%d | Difficult \n",x,division,x1);
                difficult+=1;
                ++division;
            }
            x1=x%division;
            printf("%d^%d=%d | Simple \n",x,division,x1);
            ++division;

        }

        if(difficult > 0)
        {
            printf("Number difficult\n");
        }
        else
        {
            printf("Number simple");
        }

    }
    printf("Write the numbers greater than 2 or 2");

    return 0;
}
