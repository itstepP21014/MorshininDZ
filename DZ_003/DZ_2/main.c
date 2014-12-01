#include <stdio.h>
#include <stdlib.h>

int main()
{
    int one, two;

    printf("Enter the first number\n:");
    scanf("%d",&one);
    printf("Enter the second number\n:");
    scanf("%d",&two);
    printf("\n\nConclusion\n\n");
    printf("%d + %d = %d\n", one, two ,one+two);
    printf("%d - %d = %d\n", one, two ,one-two);
    printf("%d * %d = %d\n", one, two ,one*two);
    printf("%d / %d = %d\n", one, two ,one/two);
    printf("%d %% %d = %d\n\n\n", one, two ,one*two/100);
    return 0;
}
