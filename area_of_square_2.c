// wap (write a programme) to find the area of a square.

#include <stdio.h>

int main()
{
    int a, area;
    printf("please enter the side of the square");
    scanf("%d", &a);

    area = a * a;

    printf("the value of area of the square is %d", area);
}