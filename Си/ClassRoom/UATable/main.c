#include <stdio.h>
#include <stdlib.h>

#define N 22215

int long massiv[N][N];

void disp(void);
void sor(void);

int main(void)
{
    int i, j, zuzu=0;

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            massiv[i][j] = rand()%12 + 1;
            ++zuzu;
        }
    }
    disp();
    printf("\n\n\n");
    sor();
    disp();
    printf("\n\n\n\n\n%d",zuzu);

    return 0;
}

void disp(void)
{
    int t, p;

    for(t=0; t<N; t++)
    {
        for(p=0; p<N; p++)
        {
            printf(" %d ",massiv[t][p]);
        }
        printf("\n");
    }
}

void sor(void)
{
    int t, p;

    for(t=0; t<N; t++)
    {
        for(p=0; p<N; p++)
        {
            switch(massiv[t][p])
            {
            case 1:
            case 2:
            case 3:
                massiv[t][p]=2;
                break;
            case 4:
            case 5:
            case 6:
                massiv[t][p]=3;
                break;
            case 7:
            case 8:
            case 9:
                massiv[t][p]=4;
                break;
            case 10:
            case 11:
            case 12:
                massiv[t][p]=5;
                break;
            }
        }
        printf("\n");
    }
}
