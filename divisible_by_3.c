// wap to check a number input from user is divisible by 3

#include <stdio.h>

void main()
{
    int a;

    printf("plaese enter a number");
    scanf("%d", &a);

    if (a % 3 == 0)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    a % 3 == 0 ? printf("true") : printf("false");
}