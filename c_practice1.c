// wap to find the perimeter of the rectangle by taking  the sides a & b from the user
#include <stdio.h>
void main()

{
    int a, b, perimeter;
    printf("please enter the sides of the rectangle a and b \n");
    scanf("%d\n", &a);
    scanf("%d", &b);

    perimeter = 2 * a * b;
    printf("the perimeter of the retangle is %d", perimeter);
}