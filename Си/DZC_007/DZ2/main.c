#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, division=2;

        printf("Enter the number\n:");
        scanf("%d",&x);

    if(2<=x)
    {
        printf("%d=",x);

        while(x>1)
        {
            if(x%division == 0)
            {
                printf("%d ",division);
                x/=division;
            }
            else
            {
                ++division;
            }
        }
        printf("\n\n");
    }
    printf("\nWrite the numbers greater than 2 or 2\n\n");
    return 0;
}
