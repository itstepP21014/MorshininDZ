#include <stdio.h>
#include <stdlib.h>

int main()
{
    int degree, number, sum=1, count=1;

    printf("Enter the number\n:");
    scanf("%d",&number);

    printf("Enter degree\n:");
    scanf("%d",&degree);

    while(count<=degree)
        {
            sum=sum*number, count+=1;
        }

    printf("\nSum = %d\n",sum);
    return 0;
}
