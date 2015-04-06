#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w, h, summ, Enter=0;
    char sumbol = '*';

    printf("Enter the natural number! W\n:");
    scanf("%d", &w);
    printf("Enter the natural number! H\n:");
    scanf("%d", &h);

    summ=h*w;

    printf("\n_____________________________\n");

     for(int i=0; i<summ; ++i)
     {
        if(w == Enter){
        printf("\n", Enter -= w);
        }
    printf("%c", sumbol, ++Enter);
    }

    printf("\n_____________________________\n");
    return 0;
}
