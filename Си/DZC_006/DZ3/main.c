#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fibonacci, one=0, two=1;

    for(int count=0; count<40;)
    {
        fibonacci=one+two;
        printf("#%2d | %10d | %5.3f | %.3f\n", ++count, fibonacci, 1.0*fibonacci/one, 1.0*one/fibonacci);
        two=one;
        one=fibonacci;
    }

    return 0;
}
