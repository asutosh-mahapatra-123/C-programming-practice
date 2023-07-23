#include <stdio.h>

void main()
{
    float a, area, perimeter;

    printf("please enter the length of the side of the square\n");
    scanf("%f", &a);

    area = a * a;
    perimeter = 4 * a;
    printf("the area is %f \nthe perimeter is %f\n", area, perimeter);
}