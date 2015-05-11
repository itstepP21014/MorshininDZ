#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <ncurses.h>
#include <time.h>

#define SNAKE_MAX_LENGTH 30
#define WIN_MSG "You are the WINNER!"
#define WELCOME_MSG "Welcome to games SNAKE!!!"
#define NEXTLVL_MSG "Next LEVEL!!"
#define LOST_MSG "Loooooser :-))))"
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4
#define SNAKE_CHAR 'O'
#define HEAD_SNAKE '@'
#define FOOD_CHAR 'F'
#define WALL_CHAR '#'

void initGame(void);
void checkGame();
void addFood();
void drawFood();
void initSnake();
void shiftSnake();
void addHead();
void removeTail();
void moveSnake();
void showWinner();
void showWelcome();

typedef struct SnakePart_
{
    int x;
    int y;
} SnakePart;

typedef struct Food_
{
    int x;
    int y;
} Food;

Food food;
int direction;
SnakePart snake[SNAKE_MAX_LENGTH];
int snakeLength = 1;
int row, col;
int snakeLevel = 0;

// Initialization of ncurses and the game
void initGame(void)
{
    srand(time(NULL));
    for (int i=0; i<SNAKE_MAX_LENGTH; i++)
    {
        snake[i].x = -1;
        snake[i].y = -1;
    }

    initscr();
    if(has_colors() == FALSE)
    {
        endwin();
        printf("Your terminal does not support color\n");
    }

    getmaxyx(stdscr, row, col);
    noecho();
    cbreak();
    curs_set(0);
    start_color();			/* Start color 			*/
    init_pair(1, COLOR_RED, COLOR_BLACK);
    attron(A_BOLD);
    clear();
    color_set(1, NULL);
}

// Randomly add fodd spot to the level
void addFood()
{
    int x,y;
    y = rand()%row;
    x = rand()%col;
    while ((mvinch(y, x) & A_CHARTEXT) != ' ')
    {
        y = rand()%row;
        x = rand()%col;
    }
    food.y = y;
    food.x = x;
}

// Draw food on a game plan
void drawFood()
{
    move(food.y, food.x);
    addch(FOOD_CHAR);
}

void initSnake()
{
    snake[1].x = 2;
    snake[1].y = row/2;
    snake[0].x = 3;
    snake[0].y = row/2;
    snakeLength = 3;
    direction = UP;
}

// Draw the the actual position of the snake
void drawSnake()
{
    int i=0;
    while (snake[i].x != -1 && snake[i].y != -1)
    {
        if(i==0)
        {
            move(snake[i].y, snake[i].x);
            addch(HEAD_SNAKE);
        }
        if(i>0)
        {
            move(snake[i].y, snake[i].x);
            addch(SNAKE_CHAR);
        }
        i++;

    }
}

// Helper method for shifting snake parts
void shiftSnake()
{
    int i=0;
    for (i=snakeLength-1; i>=0; i--)
    {
        snake[i+1] = snake[i];
    }
}

// Helper method for the snake movement that moves snake head in a desired direction
void addHead()
{
    SnakePart origHead = snake[0];
    shiftSnake();
    switch (direction)
    {
    case UP:
        origHead.y--;
        break;
    case DOWN:
        origHead.y++;
        break;
    case LEFT:
        origHead.x--;
        break;
    case RIGHT:
        origHead.x++;
        break;
    }
    snake[0] = origHead;
}

// Helper method for snake movement that cuts the end of the snake
void removeTail()
{
    mvaddch(snake[snakeLength].y, snake[snakeLength].x, ' ');
    snake[snakeLength].x = -1;
    snake[snakeLength].y = -1;
}

// Refresh snake movement
void moveSnake()
{
    addHead();
    checkGame();
    mvaddch(snake[0].y, snake[0].x, HEAD_SNAKE);
    if (snake[0].x == food.x && snake[0].y == food.y)
    {
        snakeLength++;
        addFood();
    }
    else
    {
        removeTail();
    }
}

// Recognize snake control
void setDirection(char c)
{
    switch(c)
    {
    case 'w':
        direction = UP;
        break;
    case 's':
        direction = DOWN;
        break;
    case 'd':
        direction = RIGHT;
        break;
    case 'a':
        direction = LEFT;
        break;
    }
}

// Draw the winner screen
void showWinner()
{
    clear();
    mvprintw(row/2, col/2-strlen(WIN_MSG)/2, WIN_MSG);
    refresh();
}

// Draw the welcome screen
void showWelcome()
{
    clear();
    mvprintw(row/2, col/2-strlen(WELCOME_MSG)/2, WELCOME_MSG);
    refresh();
}

// Draw the nextlevel screen
void showNextLevel()
{
    clear();
    mvprintw(row/2, col/2-strlen(NEXTLVL_MSG)/2, NEXTLVL_MSG);
    refresh();
}

// Draw the welcome screen
void showYouLoose()
{
    clear();
    mvprintw(row/2, col/2-strlen(LOST_MSG)/2, LOST_MSG);
    refresh();
}

// Draw the level walls
void drawLevel()
{
    //Right/Left
    for (int i=0; i<row; i++)
    {
        mvaddch(i, 0, WALL_CHAR);
        mvaddch(i, col-1, WALL_CHAR);
    }
    //Head/Down
    for (int i=1; i<col-1; i++)
    {
        mvaddch(0, i, WALL_CHAR);
        mvaddch(row-1, i, WALL_CHAR);
    }
    //Barrier/blocks
    //1
    if(snakeLevel>=2)
    {
        for (int i=10; i<row-10; i++)
        {
            mvaddch(i, 10, WALL_CHAR);
            mvaddch(i, col-10, WALL_CHAR);
            for (int i=5; i<col-5; i++)
            {
                if(i<=30 || i>=col-30)
                {
                    mvaddch(4, i, WALL_CHAR);
                    mvaddch(row-5, i, WALL_CHAR);
                }
            }
        }

    }
    //2
    if(snakeLevel>=4)
    {
        for (int i=20; i<col-19; i++)
        {
            mvaddch(row/3, i, WALL_CHAR);
            mvaddch((row/3)*2-1, i, WALL_CHAR);
            for (int i=10; i<row-10; i++)
            {
                if(i<=11 || i>=15)
                {
                    mvaddch(i, 20, WALL_CHAR);
                    mvaddch(i, col-20, WALL_CHAR);
                }
            }
        }
    }
    //barrier v 1
    if(snakeLevel>=6)
    {
        for (int i=9; i<row-9; i++)
        {
            mvaddch(i, 14, WALL_CHAR);
            mvaddch(i, col-15, WALL_CHAR);
            for (int i=5; i<col-5; i++)
            {
                if(i<=9 || i>=col-10)
                {
                    mvaddch(8, i, WALL_CHAR);
                    mvaddch(row-9, i, WALL_CHAR);
                }
            }
        }
    }
    //Center/v2
    if(snakeLevel>=8)
    {
        for (int i=28; i<col-28; i++)
        {
            mvaddch(12, i, WALL_CHAR);
        }
    }


}

// Check on a game state. Checked after every game step (see main())
void checkGame()
{
    if (snakeLength == SNAKE_MAX_LENGTH-1)
    {
        showWinner();
        timeout(-1);
        getch();
        exit(0);
    }
    if ((mvinch(snake[0].y, snake[0].x) & A_CHARTEXT) == WALL_CHAR)
    {
        showYouLoose();
        timeout(-1);
        getch();
        exit(0);
    }
    if ((mvinch(snake[0].y, snake[0].x) & A_CHARTEXT) == SNAKE_CHAR)
    {
        showYouLoose();
        timeout(-1);
        getch();
        exit(0);
    }
}

// Game init function
int main()
{
    char c;
    int snakelvlup=3;
    int welcome= 1;
    int uplvl = 1;
    int snakespeed = 100;
    int speedlvl = 0;

    // Main game loop
    while (1)
    {
        if(uplvl == 1)
        {
            initGame();
            if(welcome == 1)
            {
                showWelcome();
                welcome--;
            }
            else
            {
                showNextLevel();
                sleep(1);
                snakespeed-=5;
                snakelvlup++;
            }
            getch();
            clear();
            initSnake();
            drawLevel();
            drawSnake();
            addFood();
            refresh();
            uplvl--;
            sleep(2);
        }
        timeout(snakespeed);
        c = getch();
        setDirection(c);
        clear();
        drawLevel();
        moveSnake();
        checkGame();
        drawSnake();
        drawFood();
        refresh();
        if(snakeLength>=snakelvlup)
        {
            snakeLevel++;
            speedlvl-=5;
            uplvl = 1;
        }
    }
}
