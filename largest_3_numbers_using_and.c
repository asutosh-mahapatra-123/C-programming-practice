#include <stdio.h>

void main()
{
    int a, b, c, largest;
    printf("enter 3 numbers\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && c > a)
    {
        largest = c;
    }
    else if (a > b && a >= c)
    {
        largest = a;
    }
    else if (b >= a && b > c)
    {
        largest = b;
    }
    else if (b >= a && c >= b)
    {
        largest = c;
    }
    else
    {

        printf("no largest");
    }

    printf(" the largest is %d", largest);
}