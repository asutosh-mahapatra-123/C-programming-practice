// wap to take 4 inputs using scanf ( can be float )
// divide 1st 2 number and 2nd
// a/b + c/d

#include <stdio.h>

float main()
{
    char chr = "as";
    printf("%c\n", chr);
    float a, b, c, d, ans;
    printf("please enter 1st number \n");
    scanf("%f", &a);
    printf("please enter 2nd number \n");
    scanf("%f ", &b);
    printf("please enter 3rd number \n");
    scanf("%f ", &c);
    printf("plese enter 4th number \n");
    scanf("%f", &d);

    ans = a / b + c / d;
    printf("the ans is %f", ans);
}