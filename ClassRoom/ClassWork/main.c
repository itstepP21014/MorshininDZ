#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max_size 1000

int main()
{
    char number;
    int Num;
    int Ran;

    srand(time(NULL));

    printf("Enter the N->number or R->random?\n:");
    scanf("%s", &number);

    switch(number)
    {
    case 'N':
        printf("Enter Number\n:");
        scanf("%d", &Num);
        printf("Number %d",Num);
        break;
    case 'R':
        Ran = rand() %max_size;
        printf("Random %d\n", Ran);
        break;
    }

    return 0;
}


