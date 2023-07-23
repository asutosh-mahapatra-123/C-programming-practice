// wap to find the area and the perimeter of a circle

#include <stdio.h>

int main()
{
    float radiud, area, circumference;

    printf("please enter the radius of the circle\n");
    scanf("%f", &radiud);

    area = 3.14 * radiud * radiud;

    circumference = 2 * 3.14 * radiud;
    printf("the area of the circle is %f cm^2\n", area);
    printf("the circumference is %f cm", circumference);

    return 0;
}