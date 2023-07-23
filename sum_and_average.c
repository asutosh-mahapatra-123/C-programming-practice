#include <stdio.h>

void main()
{
    int a, b;
    float sum, average;

    printf("input 2 integer numbers");
    scanf("%d%d", &a, &b);

    sum = a + b;
    average = (float)(a + b) / 2;

    printf("the sum is %f \n the average i %f", sum, average);
}