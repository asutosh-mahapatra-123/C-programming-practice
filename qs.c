// find the sum of first 10 natural numbers using while loop

#include <stdio.h>
void main()
{
    int i = 1, sum = 0, n = 10;
    while (i <= n)
    {
        sum += i;
        i++;
    };
    printf("the sum is %d", sum);
}