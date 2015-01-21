#include <stdio.h>
#include <stdlib.h>

void hanoi(int d, char from, char to, char helper);

int main()
{
    hanoi(6, 'A', 'B', 'C');
    return 0;
}

void hanoi(int d, char from, char to, char helper)
{
    if(d>1)
    {
        hanoi(d-1, from, helper, to);
        printf("%c -> %c\n", from, to);
        hanoi(d-1,helper, to, from);
    }
    else
    {
        printf("%c -> %c\n", from, to);
    }
}
