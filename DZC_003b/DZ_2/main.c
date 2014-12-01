#include <stdio.h>
#include <stdlib.h>

int main()
{
    char mama[]="Mama";
    char mila[]="mila";
    char ramy[]="ramy";
    printf("\n\n%s %s %s\n", mama, mila, ramy);
    printf("\n\n%s %s %s\n", ramy, mama, mila);
    printf("\n\n%s %s %s\n", mila, ramy, mama);
    printf("\n\n%s %s %s\n", ramy, mila, mama);
    printf("\n\n%s %s %s\n", mama, ramy, mila);
    printf("\n\n%s %s %s\n", mila, mama, ramy);

    return 0;
}
