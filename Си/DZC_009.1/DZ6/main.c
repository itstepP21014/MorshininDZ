#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������

    int N1,N2;
    char Z;
    printf("\t\t\t������� ����������� \n\n");

    printf("������ �����\n:");
    scanf("%d",&N1);
    printf("������ ���� / , * , - ��� +\n:");
    scanf(" %c",&Z);

    switch(Z)
    {
    case '+':
        printf("������ ������ �����\n:");
        scanf("%d",&N2);
        printf("%d+%d=%d", N1, N2, N1+N2);
        break;
    case '-':
        printf("������ ������ �����\n:");
        scanf("%d",&N2);
        printf("%d-%d=%d", N1, N2, N1-N2);
        break;
    case '*':
        printf("������ ������ �����\n:");
        scanf("%d",&N2);
        printf("%d*%d=%d", N1, N2, N1*N2);
        break;
    case '/':
        printf("������ ������ �����\n:");
        scanf("%d",&N2);
        printf("%d/%d=%d", N1, N2, N1/N2);
        break;
    }
    return 0;
}
