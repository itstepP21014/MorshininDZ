#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int Y;
    scanf("%d",&Y);
    for (int i = 1; i <= Y; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (j == i)
            {
                for(int z = 0; z <= Y - j - 1; ++z)
                {
                    printf(" ");
                }
                printf("$");
            }
            else
            {
                for(int z = 0; z <= Y - j; ++z)
                {
                    printf(" ");
                }
            }
            for(int z = 0; z <= 2 * j; ++z)
            {
                printf("*");
            }
            if (j == i)
            {
                printf("$");
            }
            printf("\n");
        }
    }

    for(int s=0; s<Y/2; ++s)
    {
        for(int i=0; i<Y*2+1; ++i)
        {
            if(2*Y-Y==i || Y*2-Y+2==i)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
