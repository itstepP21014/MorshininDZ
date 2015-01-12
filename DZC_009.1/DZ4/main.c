#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

    int N, N1, Time=0, allTime=0, life=101;
    double exorcismSpeed=10, fatigueTime=10, flyReturnSpeed=1, slowexorcismSpeed=0.2;
    printf("Иван Васильевич зашёл в комнату и обнаружил, что туда залетели мухи.\n\n");
    printf("Укажите сколько мух залетело в комнату\n:");
    scanf("%d",&N);

    N1=N;

    printf("Он начал выгонять мух размахивая полотенцем\n");

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
            printf("Иван Васильевич сел на стул и сказал 'Невозможно выгнать всех мух!'\n");
        }
        if(N<=0)
        {
            life=0;
            printf("Иван Васильевич выгнал всех мух за %d минут\n",allTime);
        }
    }
    if(life>=1 && N>0 || life<-1)
    {
        printf("Иван Васильевич устал и не может выгнать мух\n");
    }



    return 0;
}
