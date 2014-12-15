#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w, h, h2=0;
    int space=' ';
    char sumbol = '#';

    printf("Enter the natural number! W\n:");
    scanf("%d", &w);
    printf("Enter the natural number! H\n:");
    scanf("%d", &h);

    h2=h-2;

    printf("\n_____________________________\n");

    if(1==w && 1<=h)
    {
        w=h;
        for(int i=0; w > i; ++i)
        {
            printf("%c\n",sumbol);
        }
    }
    else if(1<w && 1==h)
    {
        for(int i=0; w > i; ++i)
        {
            printf("%c",sumbol);
        }
    }
    else
    {
        for(int i=0; w > i; ++i)
        {
            printf("%c",sumbol);
        }
        for(int i=0; h2 > i; ++i)
        {
            printf("\n%c%*c%c",sumbol, h, space, sumbol);
        }
        printf("\n");
        for(int i=0; w > i; ++i)
        {
            printf("%c",sumbol);
        }
    }

    printf("\n_____________________________\n");
    return 0;
}
