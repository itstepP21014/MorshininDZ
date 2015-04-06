#include <stdlib.h>
#include <stdio.h>

void Fibonach()
{
    int fb(int n)
    {

        if(n >2)
        {
            return fb(n-1)+fb(n-2);
        }
        else
        {
            return 1;
        }
    }

}
