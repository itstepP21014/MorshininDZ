#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int computer, human, score=1;

                computer=rand()%99 +1;

                while(3!=computer)
                {
                printf("\nTry to guess the number\n");
                printf("Number %d? more or less or yes\n:",computer);
                scanf(" %d",&human);
                if(human == 1)
                    {
                        computer+=rand()%computer +1;
                        printf("\n!More!\n");
                        ++score;
                    }
                else if(human == 2)
                    {
                        computer-=rand()%computer +1;
                        printf("\n!Less!\n");
                        ++score;
                    }
                else if(human == 3)
                        {
                        printf("Computer guessed the number %d\n\n\n", score);
                       }
                }


    return 0;
}
