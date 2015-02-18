#include <stdio.h>
#include <stdlib.h>

int massiv[2][6];

void disp(void);
void sor(void);

int main(void)
{
    int i, j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<6; j++)
        {
           massiv[i][j] = rand()%20;
          //  printf("Enter the number:\n");
           // scanf(" %d", &massiv[i][j]);

        }
    }
     disp();
     printf("\n\n\n");
    sor();
    disp();

    return 0;
}

void disp(void)
{
    int t, p;

    for(t=0; t<3; t++)
    {
        for(p=0; p<6; p++)
        {
            printf(" %d ",massiv[t][p]);
        }
        printf("\n");
    }
}

void sor(void)
{
    int c=0, i, j=5;
    int n=1;
    for(i=0; i<3; ++i)
    {
        c=massiv[i][5];
        while(j!=0)
        {
            massiv[i][j]=massiv[i][j-i-n];
            --j;
        }
        --n;
        massiv[i][j]=c;
        j=5;
    }
}
