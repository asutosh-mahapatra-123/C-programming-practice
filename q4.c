/* write a programme to take 6 numbers and give the ans as
 ans= a*b + c/d - e*f */

#include <stdio.h>

void main()
{
    float a, b, c, d, e, f, ans;
    printf("please enter 1st number \n");
    scanf("%f", &a);
    printf("please enter 2nd number \n");
    scanf("%f ", &b);
    printf("please enter 3rd number \n");
    scanf("%f ", &c);
    printf("plesae enter 4th number \n");
    scanf("%f", &d);
    printf("please enter 5th number \n");
    scanf("%f", &e);
    printf("please enter 6th number \n");
    scanf("%f", &f);

    ans = a * b + c / d - e * f;

    printf("the ans is %f", ans);
}
