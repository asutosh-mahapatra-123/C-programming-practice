// wap to find the average of 3 numbers
#include <stdio.h>

int main()
{
    int a, b, c, average;
    printf("please enter 3 numbers");
    scanf("%d %d %d", &a, &b, &c);

    average = (a + b + c) / 3;

    printf("the average value is %d", average);
}