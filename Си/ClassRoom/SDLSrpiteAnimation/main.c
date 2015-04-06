#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <math.h>
#include <stdbool.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

int main()
{
    if(SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        fprintf(stderr, "SDL_Init Error: %s\n", SDL_GetError());
        exit(1);
    }

    SDL_Window *win = SDL_CreateWindow("Hello World!", 100, 100, 700, 500, SDL_WINDOW_SHOWN);

    if(win == NULL)
    {
        fprintf(stderr, "SDL_CreateWindow Error: %s\n", SDL_GetError());
        exit(1);
    }

    if(!IMG_Init(IMG_INIT_PNG))
    {
        fprintf(stderr, "SDL_ImageInit Error: %s\n", IMG_GetError());
        exit(1);
    }

    SDL_Renderer *ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    if(ren == NULL)
    {
        SDL_DestroyWindow(win);
        fprintf(stderr, "SDL_CreateRender Error: %s\n", SDL_GetError());
        SDL_Quit();
        exit(1);
    }

    SDL_Surface *bmp = IMG_Load("Rabbit.png");

    if(bmp == NULL)
    {
        SDL_DestroyRenderer(ren);
        IMG_Init(IMG_INIT_PNG);
        SDL_DestroyWindow(win);
        fprintf(stderr, "SDL_LoadBMP Error: %s\n", SDL_GetError());
        SDL_Quit();
        exit(1);
    }

    SDL_Texture *tex = SDL_CreateTextureFromSurface(ren, bmp);
    SDL_FreeSurface(bmp);

    if(tex == NULL)
    {
        SDL_DestroyRenderer(ren);
        SDL_DestroyWindow(win);
        fprintf(stderr, "SDL_CreateTextureFromSurface Error: %s\n", SDL_GetError());
        SDL_Quit();
        exit(1);
    }

//Now lets drow our image
//First clear the renderer
    SDL_SetRenderDrawColor(ren, 0xFF, 0xFF, 0xFF, 0xFF);
//Draw the texture

    //int x, y, t=0;

    bool quit=false;
    SDL_Event e;

    while(!quit)
    {
    int ticks= SDL_GetTicks();
    int sprite= (ticks/400)%7;

        while(SDL_PollEvent(&e));
        {
        switch(e.type)
        {
        case SDL_QUIT:
            quit=true;
            break;
        }
//for(int i=0; i<12; ++i)
        {
//x= 192*cos((3.14*i/6)+t);
//y= 192*sin((3.14*i/6)+t);
            SDL_Rect dst= {SCREEN_WIDTH/2-128, SCREEN_HEIGHT/2-128, 128, 256};
            SDL_Rect src= {sprite*138, 0, 138, 256};
            SDL_RenderCopy(ren, tex, &src, &dst);
        }

        SDL_RenderPresent(ren);
        SDL_RenderClear(ren);

        }
// SDL_Delay(100);

    }
//Update the screen
    SDL_RenderPresent(ren);
//Have the program wait for 2000ms so we get a chance to see the
    SDL_Delay(10000);

    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    IMG_Quit();
    SDL_DestroyWindow(win);
    SDL_Quit();

    return 0;
}
