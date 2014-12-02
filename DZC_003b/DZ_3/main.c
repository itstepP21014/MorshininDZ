#include <stdio.h>
#include <stdlib.h>
int maxChar(char[],char[],char[],char[]);

int main()
{
    char jack[10]="Jack", wiiliam[10]="Wiiliam", sue[10]="Sue", judith[10]="Judith" ;

    double jackweight=2.148, wiiliamweight=-1.769, sueweight=3.015, judithweight=-5.200;

    printf("____________________________\n\n");
    printf("%+7s | %.3f\n", jack, jackweight);
    printf("%+7s | %.3f\n", wiiliam, wiiliamweight);
    printf("%+7s | %.3f\n", sue, sueweight);
    printf("%+7s | %.3f\n\n", judith, judithweight);
    printf("____________________________\n");
    return 0;
}
