#include <stdio.h>
int main()
{
    int a = 10, b;

    b = a++;
    printf("a is %d b is %d\n", a, b);

    int c = 9, d;

    printf("c is %d d is %d", c, d);

    return 0;
}