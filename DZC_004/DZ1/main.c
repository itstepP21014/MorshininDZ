#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hello="Hello world!";

    for( int numbe=1; numbe<=137; numbe+=1)
    {
    printf("%3d:%s\n", numbe, hello);
    printf("____________________\n");
    }
    return 0;
}
