// wap to find area and perimeter of a recatangle

#include <stdio.h>

void main()
{
    float length, breadth, area, perimeter;

    printf("please enter length and breadth \n");
    scanf("%f %f", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("the area is %f \nthe perimeter is %f ", area, perimeter);
}