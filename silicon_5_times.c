#include <stdio.h>
#include <math.h>
void main()
{
    int i = 1, sum = 0;
    while (i <= 5)
    {
        sum = sum + pow(i, 2);
        i++;
    }
    printf("%d", sum);
}