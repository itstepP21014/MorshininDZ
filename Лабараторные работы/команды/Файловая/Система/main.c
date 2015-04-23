#include <stdio.h>
#include <stdlib.h>


int main()
{

    unsigned char catalog[10][10];

    char files;

    // Создание каталого забитие нулями
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            catalog[i][j] = 'q';
        }
    }
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            printf("%d",catalog[i][j]);
        }
        printf("\n");
    }
    // Создание каталого забитие нулями

    //Создание папки/файла
    int catal1=0, catal2=0;

    scanf("%s", &files);
    catalog[catal1][catal2] = files;

    ++catal1;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            printf("%s", &catalog[i][j]);
        }
        printf("\n");
    }
    //Создание папки
    return 0;
}
