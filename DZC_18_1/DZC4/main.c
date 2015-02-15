/* Простая игра в крестики-нолики. */
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>




char matrix[3][3];  /* матрица игры */

char check(void);
void init_matrix(void);
void get_oneplayer_move(void);
void get_twoplayer_move(void);
void disp_matrix(void);

int main(void)
{
    char done;

    SetConsoleCP (1251);
    SetConsoleOutputCP (1251);




    printf("Это игра в крестики-нолики.\n");
    printf("Вы будете играть против компьютера.\n");

    done =  ' ';
    init_matrix();

    do
    {
        disp_matrix();
        get_oneplayer_move();
        done = check(); /* проверка, есть ли победитель */
        if(done!= ' ') break; /* есть победитель */
        disp_matrix();
        get_twoplayer_move();
        done = check(); /* проверка, есть ли победитель */
        if(done!= ' ') break; /* есть победитель */
    }
    while(done== ' ');

    if(done=='X') printf("Вы победили!\n");
    else printf("Победил компьютер!!!!\n");
    disp_matrix(); /* показ финальной позиции */

    return 0;
}

/* Инициализация матрицы игры. */
void init_matrix(void)
{
    int i, j;

    for(i=0; i<3; i++)
        for(j=0; j<3; j++) matrix[i][j] =  ' ';
}

/* Ход игрока. */
void get_oneplayer_move(void)
{
    int x, y;

    printf("Ходит первый игрок знак(X)\nВведите координаты X,Y Вашего хода: ");
    scanf("%d%*c%d", &x, &y);

    x--;
    y--;

    if(matrix[x][y]!= ' ')
    {
        printf("Неверный ход, попытайтесь еще.\n");
        get_oneplayer_move();
    }
    else matrix[x][y] = 'X';
}

/* Ход компьютера. */
void get_twoplayer_move(void)
{
    int x, y;

    printf("Ходит первый игрок знак(O)\nВведите координаты X,Y Вашего хода: ");
    scanf("%d%*c%d", &x, &y);

    x--;
    y--;

    if(matrix[x][y]!= ' ')
    {
        printf("Неверный ход, попытайтесь еще.\n");
        get_twoplayer_move();
    }
    else matrix[x][y] = 'O';
}

/* Вывод матрицы на экран. */
void disp_matrix(void)
{
    int t;

    for(t=0; t<3; t++)
    {
        printf(" %c | %c | %c ",matrix[t][0],
               matrix[t][1], matrix [t][2]);
        if(t!=2) printf("\n---|---|---\n");
    }
    printf("\n");
}

/* Определение победителя. */
char check(void)
{
    int i;

    for(i=0; i<3; i++)  /* проверка строк */
        if(matrix[i][0]==matrix[i][1] &&
                matrix[i][0]==matrix[i][2]) return matrix[i][0];

    for(i=0; i<3; i++)  /* проверка столбцов */
        if(matrix[0][i]==matrix[1][i] &&
                matrix[0][i]==matrix[2][i]) return matrix[0][i];

    /* проверка диагоналей */
    if(matrix[0][0]==matrix[1][1] &&
            matrix[1][1]==matrix[2][2])
        return matrix[0][0];

    if(matrix[0][2]==matrix[1][1] &&
            matrix[1][1]==matrix[2][0])
        return matrix[0][2];

    return ' ';
}
