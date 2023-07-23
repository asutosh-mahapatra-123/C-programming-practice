// take 4 inputs using scanf  add those numebers  ( these can be float and integer)

#include <stdio.h>

int main()
{

    // taken 4 inputs from user
    float a, b, c, d, ans;
    printf("please enter 1st number\n");
    scanf("%f", &a);
    printf("please enter 2nd number\n");
    scanf("%f", &b);
    printf("please enter 3rd number\n");
    scanf("%f", &c);
    printf("please enter 4th number\n");
    scanf("%f", &d);

    // addition of 4 numbers
    ans = a + b + c + d;
    printf("the ans is %f", ans);
}