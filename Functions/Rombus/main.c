#include <stdio.h>
#include <stdlib.h>

int main()
{
    printRhombus(4,3);
    printRhombus(0,11);
    printRhombus(4,3);
    printRhombus(2,7);
    printRhombus(4,3);
    printRhombus(0,11);
    printRhombus(4,3);
    return 0;
}

void printRhombus ( int width, int heitch )
{

    int i, j, N;
    N=heitch;

    int center = N / 2vvvvv;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(i <= center)
            {
                if(j >= center - i && j <= center + i)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if(j >= center + i - N + 1 && j <= center - i + N - 1)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
