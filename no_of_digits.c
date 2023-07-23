#include <stdio.h>

void main()
{
    int num, digit = 0;
    printf("enter a number");
    scanf("%d", &num);
    
    while (num > 1)
    {
        num = num / 10;
        digit++;
    }
    printf("the number of digits are %d", digit);
}