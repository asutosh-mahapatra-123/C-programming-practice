// wap add 2 numbers 5.8 and 7.7

#include <stdio.h>
int main()
{
    float a;
    float b;
    printf("please enter 1st number\n");
    scanf(" %f \n", &a);
    printf("please enter 2nd number\n");
    scanf(" %f", &b);
    float pk = a + b;
    printf("addition of  %f and %f is %f", a, b, pk);
}