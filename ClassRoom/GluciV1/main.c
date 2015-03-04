#include <stdio.h>
#include <stdlib.h>

int main()
{

    long long int a=0xFEFEFEFEFEFEFEFE;
    char str[19]="mama\n123rama";
    long long int b=0xDADADADADADADADA;
    printf("%s\n",str);
    for(char *p=str;*p;++p)
    {
        printf("%c\t%#x\n",*p,*p);
    }
    return 0;
}
