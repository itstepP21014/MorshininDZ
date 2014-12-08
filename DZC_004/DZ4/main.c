#include <stdio.h>
#include <stdlib.h>

int main()
{
    int many, onenumber, numbers, sum=1, meter=0;

    printf("Enter the number\n:");
    scanf("%d",&onenumber);
    printf("-----------------\n");

    printf("Enter how many numbers will\n:", sum=onenumber*sum);
    scanf("%d",&many);
    printf("-----------------\n");

    while(many>=1)
    {
        printf("Enter additional number #%d\n:", meter+=1);
        scanf("%d", &numbers);
        printf("-----------------\n", sum=sum*numbers, many-=1);
    }

    printf("\nSum = %d\n",sum);
    return 0;
}
