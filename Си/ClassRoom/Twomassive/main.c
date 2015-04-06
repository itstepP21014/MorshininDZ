#include <stdio.h>
#include <stdlib.h>

int massiv[3][5];

void disp(void);
void sor(void);

int main(void)
{
    int i, j;

    for(i=0; i<5; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter the number:\n");
            scanf(" %d", &massiv[i][j]);
            disp();
        }
    }
    sor();
    disp();

    return 0;
}

void disp(void)
{
    int t, p;

    for(t=0; t<5; t++)
    {
        for(p=0; p<3; p++)
        {
            printf(" %d ",massiv[t][p]);
        }
        printf("\n");
    }
}

void sor(void)
{
    int N=0, o=1, t=0, c=0;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<3; j++)
        {
            N=0;
            while(5*3!=N)
            {
                if(massiv[i][j]==0)
                {
                    if(massiv[0][0]==0)
                    {
                        c=massiv[i][j];
                        massiv[i][j]=massiv[0+t][0+o];
                        massiv[0+t][0+o]=c;
                        ++o;
                        if(3==o)
                        {
                            ++t;
                        }
                    }
                    c=massiv[0][0];
                    massiv[0][0]=massiv[i][j];
                    massiv[i][j]=c;
                }
                ++N;
            }
        }
    }
}
