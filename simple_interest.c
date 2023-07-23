#include <stdio.h>

void main()
{
    int principal, rate, time, simple_interest;

    printf("please enter the value of principal and rate and time");
    scanf("%d%d%d", &principal, &rate, &time);

    simple_interest = principal * rate * time / 100;

    printf("the value of simple interest is %d", simple_interest);
}