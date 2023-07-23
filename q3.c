// wap to take 4 numbers and show the ans= a*b + c*d

#include <stdio.h>

void main()
{

    float x, y, z, q, ans;
    printf(" please enter 1st number /n");
    scanf("%f ", &x);
    printf("please enter 2nd number /n");
    scanf("%f", &y);
    printf("please enter 3rd number /n ");
    scanf("%f", &z);
    printf("please enter 4th number /n");
    scanf("%f", &q);

    ans = x * y + z * q;
    printf(" the ans is  %f", ans);
}
