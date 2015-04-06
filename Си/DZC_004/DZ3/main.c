#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cube=1;

    printf("\n |  # | Odd | Cubed |\n  _____________________\n");
    for( int number=1; number<=17; number+=1)
    {
    printf("\n | %2d | %3d | %5d |\n", number, cube, cube*cube*cube);
    printf("  _____________________\n", cube+=2);
    }
    return 0;
}
