#include <stdio.h>
#include <stdlib.h>
int main()
{
int number, numbers, max, min, counts;

    printf ("Enter numbers: ");
    scanf( "%d", &numbers );

    if(0==numbers)
    {
    printf("According to the problem\nyou need to enter \nis greater than zero\n\n\n");
    }
    else
    {
        for (int count=0; count<numbers; ++count)
        {
            counts=count;
            printf ( "\nEnter the number #%d\n:", ++counts);
            scanf ( "%d", &number );
            max=max>number?max:number;
            min=min<number?min:number;
        }
        printf( "\nMinimum number %d\n", min );
        printf( "Maximum number %d\n\n", max );
    }


    return 0;
}
