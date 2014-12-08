#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numberl, numberx, sum=1, degree=0;

    printf("Enter number x\n:");
    scanf("%d",&numberx);

    printf("Enter number L\n:");
    scanf("%d",&numberl);

    while(numberl>sum)
    {
    degree+=1,sum=sum*numberx;
    }

    printf("\n%d/%d <=%d a %d/%d > %d", numberx, degree-1, numberl, numberx, degree, numberl);
    return 0;
}
