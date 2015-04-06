#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
typedef struct Fraction
{
    int num, denom;
} Fraction;

Fraction sum(Fraction a, Fraction b)
{
    Fraction result;
    result.num = a.num*b.denom + b.num *a.denom;
    result.denom = a.denom * b.denom;
    int div=gcd(result.num, result.denom);
    result.num/=div;
    result.denom/=div;
    return result;
}
