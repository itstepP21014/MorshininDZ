#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int computer=0, human=0, score=1;


                computer=rand()%99 +1;

                while(human!=computer)
                {
                printf("\nTry to guess the number\n");
                printf("Attempt # %d\n:",score);
                scanf("%d",&human);
                if(human<computer)
                    {
                        printf("\n!More!\n");
                        ++score;
                    }
                else if(human>computer)
                    {
                        printf("\n!Less!\n");
                        ++score;
                    }
                else if(human==computer)
                        {
                        printf("\n\nYou guessed number!\n");
                        printf("You number %d | Computer number %d\n", human, computer);
                        printf("you guessed the number of %d attempts!\n\n\n", score);
                       }
                }

    return 0;
}
