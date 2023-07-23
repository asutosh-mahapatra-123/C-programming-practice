#include <stdio.h>

void main()
{
    int a;
    printf("plese enter a number");
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("even");

    else
    {
        printf("odd");
    }

    // ternary operator
    a % 2 == 0 ? printf("even") : printf("odd");

    // bitwise and &

    if (a & 1 == 0)
        printf("even");

    else
    {
        printf("odd");
    }

    a & 1 == 0 ? printf("even") : printf("odd");
}