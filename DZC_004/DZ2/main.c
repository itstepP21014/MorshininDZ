#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number;

    printf("Enter a number to display!\n:");
    scanf("%d", &number);
    printf("______________________________\n\n");

    for( int one=1; one<=number; one+=1 )
    {
     printf("%d ", one);
    }
    printf("\n______________________________\n\n");
    return 0;
}
