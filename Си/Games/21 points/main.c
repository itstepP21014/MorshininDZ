#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int humanScore=0;

    int computerScore=0;
    int wishTakeacuud;

    //HumanScore

    for( int i=1; i<=2; ++i)
    {
        humanScore+=rand()%11+1;
        printf("You Score :\n%d\n", humanScore);
    }

    char answer;
    do{
        answer='y';
        if(humanScore>=11)
        {
            printf("Would you like tade gone more card ?(y\n)\n:");
            scanf("%c",&answer);
        }
        if('y' == answer)
        {
            humanScore+=rand()%11+1;
        }
        printf("You Score :\n%d\n", humanScore);
    }while('y'==answer && humanScore<21);

    //ComputerScore

    for( int i=1; i<=2; ++i)
    {
        computerScore+=rand()%11+1;
        printf("ComputerScore :\n%d\n", computerScore);
    }

    do{
        wishTakeacuud = 1;
        if( computerScore>10 )
        {
            wishTakeacuud=21-computerScore>rand()%11;
        }
        if(wishTakeacuud)
        {
            computerScore+=rand()%11+1;
        }
    }while (wishTakeacuud && computerScore <21);

    //WON!!!

    if(computerScore > 21 && humanScore <=21)
    {
        printf("You are won!!!\n");
    }
    else if(humanScore == 21)
    {
        printf("You are won!!!\n");
    }
    else if (humanScore < 21 && computerScore < humanScore)
    {
        printf("You are won!!!\n");
    }
    else if (humanScore <21 && computerScore == humanScore)
    {
        printf("If is draw!!!\n");
    }
    else
    {
        printf("You a lost!!\n");
    }

    printf("You %d\n",humanScore);
    printf("Computer %d\n", computerScore);


    return 0;
}
