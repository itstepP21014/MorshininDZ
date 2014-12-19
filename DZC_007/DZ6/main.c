#include <stdio.h>

#include <conio.h>

int main ()

{
    int N, H, d, sum = 0, cum=0;
    printf("Enter number\n:");
    scanf("%d",&N);

    H=N;
    printf ("\n\n%d |", H);
    for(int i=1; i<1000; ++i)
    {
        while ( N != 0 )
        {
            d = N % 10;
            sum = sum + d;
            N = N / 10;
        }
        H=H+1;
        N=H;
        cum=0;
        d=0;
        while ( N != 0 )
        {
            d = N % 10;
            cum = cum + d;
            N = N / 10;
        }
        if(sum == cum)
        {
            printf (" %d - %d |", cum, H);
        }
    }
    return 0;
}

