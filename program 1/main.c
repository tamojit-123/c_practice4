#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius;
    double area,circumference;
    printf("\n Enter the radius of the circle: ");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    circumference = 2*3.14*radius;
    printf("\n AREA= %.21e",area);
    printf("\n CIRCUMFERENCE=%.2e",circumference);
    return 0;
}
