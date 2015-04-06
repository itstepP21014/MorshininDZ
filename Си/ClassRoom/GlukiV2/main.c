#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[5]= "Mama";
    char *str2= "mama";
    printf("%s\n%s\n",str1,str2);
    str2[0]='r';
    printf("%s\n%s\n",str1,str2);
    return 0;
}
