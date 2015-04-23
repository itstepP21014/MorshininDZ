#include <stdio.h>
#include <stdlib.h>


int main()
{

    int catalog[10][10];

    char user;

    // Создание каталого забитие нулями
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            catalog[i][j] = 0;
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

    printf("\t\t\t\t\t\t\t\t\t\tVirtual Mashine\t\t\t\t\n\t\t\t\t\t\t\t\t\t\t   Commands:\n\t\t\t\t\tCreate->CreateFiles | Delete->DeleteFiles | Open->OpenFilesRead | Close->CloseFiles");
    scanf("%s", &user);

    /*switch(user)
    {
    case `Create:
        break;
    case "Delete":
        a++;
    case "Open":
        a++;
    }*/

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
