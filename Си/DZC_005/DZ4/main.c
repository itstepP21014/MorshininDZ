#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers, fibonacci, one=0, two=1;

    printf("Enter the numbers\n:");
    scanf("%d",&numbers);

    printf("\nFibonacci\n\n");

    for(int count=0; count<numbers; ++count)
    {
        if(0<numbers)
        {
        printf("%d ",fibonacci=one+two);
        two=one;
        one=fibonacci;
        }
    }
    return 0;
}
