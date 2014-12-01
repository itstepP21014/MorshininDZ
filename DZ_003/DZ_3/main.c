#include <stdio.h>
#include <stdlib.h>

int main()
{
    int radius, height;

    printf("Enter the radius of the cone\n:");
    scanf("%d",&radius);
    printf("Enter the height of the cone\n:");
    scanf("%d",&height);

    double pi=3.1415926535897932384626433832795;
    double l = sqrt(height*height + radius*radius);

    printf("\n\nConclusion\n\n");
    printf("The volume of a cone\n");
    printf("%.5f",pi*radius*radius*height/3);
    printf("\n");
    printf("The total surface of the cone\n");
    printf("%.5f",pi*radius*(radius+l));
    printf("\n\n");
    return 0;
}
