#include <stdio.h>
#include <stdlib.h>
int maxChar(char[],char[],char[],char[]);

int main()
{
    char jack[]="Jack", wiiliam[]="Wiiliam", sue[]="Sue", judith[]="Judith" ;

    double jackweight=2.148, wiiliamweight=-1.769, sueweight=3.015, judithweight=-5.200;

    printf("____________________________\n\n");
    printf("%8s | %6.3f\n", jack, jackweight);
    printf("%8s | %6.3f\n", wiiliam, wiiliamweight);
    printf("%8s | %6.3f\n", sue, sueweight);
    printf("%8s | %6.3f\n\n", judith, judithweight);
    printf("____________________________\n");
    return 0;
}
