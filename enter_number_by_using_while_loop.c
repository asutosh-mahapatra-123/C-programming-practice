#include <stdio.h>
void main()
{
    int a, b;
    printf("please Enter two numbers");
    scanf("%d%d", &a, &b);

    while (a <= b)
    {
        printf("the numbers are :%d\n", a);
        a++;
    }
    printf("THANKS FOR USING THE PROGRAMM");
}