#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

    int Sacha=1000, Vasya=1000, kvartal=0;
    double Sacha1, Vasya1;
    printf("Саша и Вася положили по 1000$ в банк\n\n");

    Sacha1=Sacha;
    Vasya1=Vasya;

    printf("  Саша 6%  |   Вася 4%  |  № Квартал\n\n");
    while(Sacha1>=Vasya1)
    {
        Sacha1+=Sacha*0.06;
        Vasya1+=Vasya1*0.04;
        printf("%9.2f %12.2f %5.d\n", Sacha1, Vasya1,kvartal+=1);
    }
    printf("\nВася стал богаче на %.2f доларов чем Саша за %d квартолов или за %d месяцев\n\n",Vasya1-Sacha1, kvartal, kvartal*3);
    return 0;
}
