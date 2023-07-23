// wap a programm to find factorial of of a given num using for loop

#include <stdio.h>
void main()
{
    int i = 0, n, factorial = 1;
    printf("the value of n ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;     // factorial 5=5*4*3*2*1
    }
    printf("the value of factorial  %d is %d", n, factorial);
}