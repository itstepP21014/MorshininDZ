#include <stdio.h>
#include <stdlib.h>

int f(int n);

int main()
{
    printf("%d\n", f(3));
    return 0;
}

int f(int n)
    {
        if(n > 0)
           {
               return n*f(n-1);
               printf("%d",n);
           }
            else
            {
                return 1;
            }
    }

//Rekurive Factorial
