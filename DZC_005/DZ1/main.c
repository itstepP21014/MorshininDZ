#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Enter=0;

    for(int ASCII=0; ASCII<128; ASCII++)
    {
        if(Enter==16){
        printf("\n",Enter-=16);
        }
     printf(" %2c",ASCII,++Enter);
    }
    return 0;
}
