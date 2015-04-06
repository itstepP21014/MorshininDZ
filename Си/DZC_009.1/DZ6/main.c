#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

    int N1,N2;
    char Z;
    printf("\t\t\tПростой калькулятор \n\n");

    printf("Ведите число\n:");
    scanf("%d",&N1);
    printf("Ведите знак / , * , - или +\n:");
    scanf(" %c",&Z);

    switch(Z)
    {
    case '+':
        printf("Ведите второе число\n:");
        scanf("%d",&N2);
        printf("%d+%d=%d", N1, N2, N1+N2);
        break;
    case '-':
        printf("Ведите второе число\n:");
        scanf("%d",&N2);
        printf("%d-%d=%d", N1, N2, N1-N2);
        break;
    case '*':
        printf("Ведите второе число\n:");
        scanf("%d",&N2);
        printf("%d*%d=%d", N1, N2, N1*N2);
        break;
    case '/':
        printf("Ведите второе число\n:");
        scanf("%d",&N2);
        printf("%d/%d=%d", N1, N2, N1/N2);
        break;
    }
    return 0;
}
