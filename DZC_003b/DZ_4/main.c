#include <stdio.h>
#include <stdlib.h>

int main()
{
    int one, two, three, four, space=' ';

    printf("Enter the first number!\n:");
    scanf("%d",&one);
    printf("Enter the second number!\n:");
    scanf("%d",&two);
    printf("Enter the third number!\n:");
    scanf("%d",&three);
    printf("Enter the fourth number!\n:");
    scanf("%d",&four);

    printf("\nConclusion\n\n");

    printf("________________________\n\n");
    printf("%*c%d\n", 1, space, one*2);
    printf("%*c%d\n", 2, space, two*2);
    printf("%*c%d\n", 3, space, three*2);
    printf("%*c%d\n", 4, space, four*2);
    printf("________________________\n\n\n");
    return 0;
}
