#include <stdio.h>

void main()
{
    int a, b, c, largest;
    printf("enter 3 numbers\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > c)
    {
        if (a > b)
        {

            largest = a;
        }
        else // b >= a
        {
            largest = b;
        }
    }
    else // c >= a
    {
        if (c > b)
        {
            largest = c;
        }
        else // b >= c
        {
            largest = b;
        }
    }
    printf(" the largest is %d", largest);
}