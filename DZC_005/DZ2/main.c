#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, degree, sum=1, count=1;

    printf("Enter the number\n:");
    scanf("%d",&number);
    printf("Enter the degree\n:");
    scanf("%d",&degree);

    if(degree>0)
    {
        while(count<=degree)
        {
        sum*=number, ++count;
        }
      printf("%d",sum);
    }
    else
    {
        degree=degree*-1;
        while(count<=degree)
        {
        sum*=number, ++count;
        }
      printf("%.2f",1.0/sum);
    }
    return 0;
}
