#include <stdio.h>
#include <stdlib.h>

#define N 5000

int summ[N];

void disp(void);
void check(void);
void sort(void);

int main(void)
{
    int j;

    for(j=0; j<N; j++)
    {
        summ[j] = rand() %10;
    }
    printf("Oke");
    check();
    printf("Oke");
    check();
    printf("Oke");
    disp();

    return 0;
}

void disp(void)
{
    int p;

    for(p=0; p<N; p++)
    {
        printf(" %d ",summ[p]);
    }
    printf("\n");
}
void check(void)
{
    int i, p=1, c=0;
    for(i=0; i<N-1; ++i)
    {
        if(summ[i]<=summ[p])
        {
            ++p;
        }
        if(summ[i]>summ[p])
        {
            c=summ[i];
            summ[i]=summ[p];
            summ[p]=c;
            i=0;
            p=1;
        }
    }
}
