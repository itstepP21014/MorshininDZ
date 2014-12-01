#include <stdio.h>
#include <stdlib.h>

int main()
{
    int one, two, three, four;

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
    printf(" %d\n", one*2);
    printf("  %d\n", two*2);
    printf("   %d\n", three*2);
    printf("    %d\n", four*2);
    printf("________________________\n\n\n0");

    return 0;
}
