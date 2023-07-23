// 3!=  3*2*1

#include <stdio.h>

void main()

{
    int a = 1, factorial = 1;
    printf("please enter a number");
    scanf("%d", &a);

    while (a >= 1)
    {
        factorial = factorial * a;
        printf("%d\n", factorial);
        a--;
    }
    printf("the value of factorial is %d", factorial);
}
