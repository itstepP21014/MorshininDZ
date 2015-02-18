#include <stdio.h>
int main()
{
    int n, f1, f2;
    printf("Enter number\n:");
    scanf("%d",&n);
    f1 = 1;
    if (n >= 0)
    {
        for (f2 = 2; f2 <= n; f2++)
        {
            f1 *= f2;
            printf("%d = %d!\n", n, f1);
        }
    }
    else
    printf("Number 0>1..3..5..\n");
return 0;
}
