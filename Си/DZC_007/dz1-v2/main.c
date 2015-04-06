#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long int number=5000000000000000003;
   long long int isCompisite=0;

    for(long long int i=2; i*i<=number && !isCompisite; ++i)
    {
        isCompisite=number%i==0;
    }
    printf(isCompisite?"composite":"prime");
    return 0;
}
