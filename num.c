#include <stdio.h>

void main()
{
    int a, b;
    printf("please enter 2 numbers");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("the larger number is %d", a);
    }
    else
    {
        printf("the largest number is %d", b);
    }
}