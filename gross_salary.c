#include <stdio.h>
void main()
{
    float bs, hra, da, gs;
    printf("enter the basic salary\n");
    scanf("%f", &bs);
    da = bs * (45 / 100.00);
    hra = bs * (30 / 100.00);
    gs = bs + hra + da;
    printf("the value of gross salary =%f", gs);
}