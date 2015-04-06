#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, *p=&a;
    a=7;
    *p=19;
    printf("%d\n",a);
    return 0;
}
