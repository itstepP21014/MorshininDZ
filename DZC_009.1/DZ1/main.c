#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������

    int m,x;
    printf("������ ����������� �����\n:");
    scanf("%d",&m);
    printf("������ ��� 1 ����������� �����\n:");
    scanf("%d",&x);
    printf("\n");
    for(int i=0; i<m; ++i)
    {
        for(int o=0; o<x*2; ++o)
        {
            if((i+o)%2==0)
            {
                printf("X");
            }
            else printf("*");
        }
        printf("\n");
    }
    printf("\n\n\n");
    return 0;
}
