#include <stdio.h>

void main()
{
    int a, b;
    printf("enter a\n");
    scanf("%d", &a);
    printf("enter b\n");
    scanf("%d", &b);
    do
    {
        printf("the numbers are %d\n", a);
        a++;
    } while (a <= b);
    printf("your programm is over");
}