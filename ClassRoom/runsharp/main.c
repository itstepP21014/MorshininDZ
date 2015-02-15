#include <stdio.h>
#include <stdlib.h>
#include "../../Modules/compatibility.h"

int main()
{
    int position = 0;
    int adding = 1;
    while(1)
    {
        for(int i = 0; i<position; ++i)
        {
            printf(" ");
        }
        printf("^(*-*)^<(xaxa)\n");
        universalSleep(0.04);
        universalClear();
        position +=adding;
        if(position <0 || position >= 40)
        {
            adding = -adding;
        }
        position += adding;
    }

    return 0;
}
