#include <stdio.h>
#include <stdlib.h>

int main()
{


    int i, j, N;

    printf("Enter the number\n:");
    scanf("%d",&N);

    int center = N / 2;
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
