#define _XOPEN_SOURCE_EXTENDED
#define _POSIX_C_SOURCE 199309L

#include <sys/ioctl.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <locale.h>

#define ROWS 20
#define COLS 30

enum Colors {normal,green,red};
enum State {opened,hidden,flagged};

char closedCell[4] = "\342\226\243";
char flaggedCell[4] = "\342\226\274";
char bombedCell[4] = "\342\227\216";


void treatSigWinch(int signo);
void initialiseProgram();

void initFields(int fogOfWar[][COLS], int field[][COLS], int rows, int cols);
void drawFields(int fogOfWar[][COLS], int field[][COLS], int rows, int cols, int curI, int curJ);
void runAround(int field[][COLS], int rows, int cols, int a, int b);
void inc(int field[][COLS], int rows, int cols, int i, int j);


int main()
{
    initialiseProgram();

    int fogOfWar[ROWS][COLS], field[ROWS][COLS];
    int curI=0, curJ=0;
    char key;
    initFields(fogOfWar, field, ROWS, COLS);
    do
    {
        drawFields(fogOfWar, field, ROWS, COLS, curI, curJ);
        refresh();
        key = getch();
        switch(key)
        {
        case 'a':
            --curJ;
            curJ+=COLS;
            curJ%=COLS;
            break;
        case 'd':
            ++curJ;
            curJ+=COLS;
            curJ%=COLS;
            break;
        case 'w':
            --curI;
            curI+=ROWS;
            curI%=ROWS;
            break;
        case 's':
            ++curI;
            curI+=ROWS;
            curI%=ROWS;
            break;
        case ' ':
            fogOfWar[curI][curJ]= opened;

            break;
        }
    }
    while(key!='p');
    endwin();
    return 0;
}

void initialiseProgram()
{
    setlocale(LC_ALL, "");
    initscr();
    signal (SIGWINCH, treatSigWinch);
    if(has_colors() == FALSE)
    {
        endwin();
        fprintf(stderr, "no colors\n");
        exit(1);
    }
    cbreak();
    noecho();
    curs_set(0);
    start_color();
    init_pair(normal, COLOR_WHITE, COLOR_BLACK);
    init_pair(green, COLOR_GREEN, COLOR_BLACK);
    init_pair(red, COLOR_RED, COLOR_BLACK);
}

void treatSigWinch(int signo)
{
    struct winsize size;
    ioctl(fileno(stdout), TIOCGWINSZ, (char *) &size);
    resizeterm(size.ws_row, size.ws_col);
}


void initFields(int fogOfWar[][COLS], int field[][COLS], int rows, int cols)
{
    for(int i=0; i<rows; ++i)
    {
        for(int j=0; j<cols; ++j)
        {
            fogOfWar[i][j] = hidden;
            field[i][j] = 0;
        }
    }
    int cellsCount = rows * cols;
    int bombsCount = 10;

    for(int i = 0; i<bombsCount; ++i)
    {
        int bombPosition = rand() % cellsCount;
        int bombI = bombPosition / cols;
        int bombJ = bombPosition % cols;
        field[bombI][bombJ] = 9;
        runAround(field,rows,cols, bombI,bombJ);
    }
}
void drawFields(int fogOfWar[][COLS], int field[][COLS], int rows, int cols, int curI, int curJ)
{
    for(int i = 0; i<rows; ++i)
    {
        for(int j=0; j<cols; ++j)
        {
            move(i,j);
            if(i == curI && j == curJ)
            {
                attron(A_REVERSE);
            }

            if(fogOfWar[i][j]==opened)
            {
                if(field[i][j]==0)
                {
                    printw(" ");
                }
                else if(field[i][j]< 9)
                {
                    printw("%d", field[i][j]);
                }
                else if(field[i][j]==9)
                {
                    attron(A_BLINK|COLOR_PAIR(red));
                    printw("%s",bombedCell);
                    attroff(A_BLINK|COLOR_PAIR(red));
                }
            }
            else if(fogOfWar[i][j] == hidden)
            {
                printw("%s", closedCell);
            }
            else if(fogOfWar[i][j] == flagged)
            {
                printw("%s",flaggedCell);
            }
            else
            {
                endwin();
                fprintf(stderr, "internal error:\n" "invalid value for fog\n");
                exit(1);

            }
            if(i == curI && j == curJ)
            {
                attroff(A_REVERSE);
            }
        }
    }
}

void runAround(int field[][COLS], int rows, int cols, int a, int b)
{
    for(int i=-1; i<2; ++i)
    {
        for(int j=-1; j<2; ++j)
        {
            inc(field, rows, cols, a + i, b + j);
        }
    }
}
void inc(int field[][COLS], int rows, int cols, int i, int j)
{
    if(i>=0 && i<rows && j>=0 && j<cols && field[i][j] < 9)
    {
        ++field[i][j];
    }
}
