#include <stdio.h>

void main()
{
    float r, area, circumference;

    printf("please enter the value of radius\n");
    scanf("%f", &r);

    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;

    printf("the area is %f \nthe circumference is %f \n", area, circumference);
}