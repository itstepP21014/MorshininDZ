#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    int catalog[10][10];

    // User commands
    char user;
    // User commands

    // Создание каталого забитие нулями
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            catalog[i][j] = 0;
        }
    }
    // Создание каталого забитие нулями

    while(1)
    {
        printf("Virtual Mashine\nCommands:\nCreate->CreateFiles|Delete->DeleteFiles|Open->OpenFilesRead|Close->CloseFiles\n");
        scanf("%s", user);
        printf("%s\n", logs);
    }

    //Создание папки/файла
    int catal1=0, catal2=0;

    scanf("%d", &catalog[catal1][catal2]);

    ++catal2;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            printf("%d", catalog[i][j]);
        }
        printf("\n");
    }
    //Создание папки

    return 0;
}
