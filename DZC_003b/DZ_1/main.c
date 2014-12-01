#include <stdio.h>
#include <stdlib.h>

int main()
{
    char hour=12, minute=13,second=14;
    printf("____________________________\n\n");
    printf("%d:%d:%d\n",hour,minute,second);
    printf("%d:%d:%d\n",hour+1,minute+1,second+1);
    printf("%d:%d:%d\n",hour+11,minute+12,second+12);
    printf("____________________________\n");
    return 0;
}
