#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

int main()
{
    signed char buf[32];
   for(int i = 0; i < 44100 * 5 / 32; ++i)
    {
        for(int j = 0; j < 32.0; ++j)
        {
            buf[j] = 32.0 * sin( (i * 32.0 * j) * 2.0 * 3.1415926536 * 220.0 / 44100.0);
        }
    }

}
