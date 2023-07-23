#include <stdio.h>
void main()
{
    int num1, num2;
    printf("please enter 2 numbers\n");
    scanf("%d%d", &num1, &num2);

    do
    {
        printf("the number is :%d\n", num1);
        num1++;

    } while (num1 <= num2);
    printf("the progrmm is over");
}
