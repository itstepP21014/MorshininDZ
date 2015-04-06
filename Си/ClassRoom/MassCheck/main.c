#include <stdio.h>
#include <stdlib.h>

#define N 11

int massiv[N][N];
int summ[N];

void disp(void);
void sor(void);

int main(void)
{
    int i, j;

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            massiv[i][j] = rand()%11;
            summ[j]=j;
        }
    }
    disp();
    printf("\n\n\n");
    sor();

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
    int t, p, c=0, n;

    for(t=0; t<N; t++)
    {
        for(p=0; p<N; p++)
        {
            for(int i=0; i<11; ++i)
            {
                if(massiv[t][p]==summ[i])
                {
                    summ[i]+=1;
                    if(summ[i]>c)
                    {
                        c=summ[i];
                        n=massiv[t][p];
                    }
                }
            }
        }
    }
    printf("\n\n\n\nCheck - %d | Number - %d",c,n);
}
