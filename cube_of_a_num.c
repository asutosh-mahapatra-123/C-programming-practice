#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, res;
    printf("please enter a number :");
    scanf("%d", &a);
    printf("please enter the exponent :");
    scanf("%d", &b);
    res = pow(a, b);
    printf("the cube of the entered num is %d", res);
    return 0;
}