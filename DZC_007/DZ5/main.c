#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int x1m=0,x100k=0,x10k=0,x1k=0,x100=0,x10=0,x1=0;

    printf("Enter the number\n:");
    scanf("%d",&x);

while(x!=0)
{
    if(x>999999)
    {
       x-=1000000;
       ++x1m;
    }
    if(x>99999)
    {
       x-=100000;
       ++x100k;
    }
    if(x>9999)
    {
       x-=10000;
       ++x10k;
    }
    if(x>999)
    {
       x-=1000;
       ++x1k;
    }
    else if(x>99)
    {
       x-=100;
       ++x100;
    }
    else if(x>9)
    {
       x-=10;
       ++x10;
    }
    else if(x>0)
    {
       x-=1;
       ++x1;
    }
}
printf("\n\n\n\n%d",x1m+x100k+x10k+x1k+x100+x10+x1);

    return 0;
}
