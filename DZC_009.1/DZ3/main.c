#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

    printf("\t\ѕрограмма дл€ определени€ палиндрома\n");

    int n,m,p;

    printf("¬едите число\n:");
    scanf("%d",&n);

    m=n; p=0;

    while(m>0)
    {
        printf("%d = %d*10+%d%10\n",p*10+m%10,p,m);
        printf("%d = %d/10\n\n",m/10,m);
        p=p*10+m%10;
        m=m/10;
    }

    if(n==p)
    {
        printf("Ёто число палиндром!");
    }
    else
    {
        printf("Ёто не число палиндром!");
    }
    return 0;
}
