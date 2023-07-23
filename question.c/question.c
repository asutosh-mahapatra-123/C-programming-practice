#include <stdio.h>

void main()
{
    int a, b, c;
    printf("please enter 3  numbers \n");
    scanf(" %d %d %d", a, b, c);

    if (a > b > c)
    {
        printf("%d is greater than %d is grater than %d", a, b, c);
    }
    else
    {
        printf("%d is not greater than %d is not grater than %d", a, b, c);
    }
}
