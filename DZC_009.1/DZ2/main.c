#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������

    int Sacha=1000, Vasya=1000, kvartal=0;
    double Sacha1, Vasya1;
    printf("���� � ���� �������� �� 1000$ � ����\n\n");

    Sacha1=Sacha;
    Vasya1=Vasya;

    printf("  ���� 6%  |   ���� 4%  |  � �������\n\n");
    while(Sacha1>=Vasya1)
    {
        Sacha1+=Sacha*0.06;
        Vasya1+=Vasya1*0.04;
        printf("%9.2f %12.2f %5.d\n", Sacha1, Vasya1,kvartal+=1);
    }
    printf("\n���� ���� ������ �� %.2f ������� ��� ���� �� %d ��������� ��� �� %d �������\n\n",Vasya1-Sacha1, kvartal, kvartal*3);
    return 0;
}
