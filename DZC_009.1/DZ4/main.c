#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������

    int N, N1, Time=0, allTime=0, life=101;
    double exorcismSpeed=10, fatigueTime=10, flyReturnSpeed=1, slowexorcismSpeed=0.2;
    printf("���� ���������� ����� � ������� � ���������, ��� ���� �������� ����.\n\n");
    printf("������� ������� ��� �������� � �������\n:");
    scanf("%d",&N);

    N1=N;

    printf("�� ����� �������� ��� ���������� ����������\n");

    while(life>1)
    {
        ++Time;
        ++allTime;
        N1=N;
        N=N-exorcismSpeed+flyReturnSpeed;

        if(fatigueTime==Time)
        {
            life-=100-100*slowexorcismSpeed;
            exorcismSpeed-=10-10*slowexorcismSpeed;
            Time=0;
        }
        if(N1<=N && N>0)
        {
            life=0;
            printf("���� ���������� ��� �� ���� � ������ '���������� ������� ���� ���!'\n");
        }
        if(N<=0)
        {
            life=0;
            printf("���� ���������� ������ ���� ��� �� %d �����\n",allTime);
        }
    }
    if(life>=1 && N>0 || life<-1)
    {
        printf("���� ���������� ����� � �� ����� ������� ���\n");
    }



    return 0;
}
