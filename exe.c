#include <stdio.h>
#include <math.h>
int main()
{
    printf("the value of 2 to the power 2 is %f\n", pow(2, 2));
    printf("the value of 5/2 is %f\n", 5 / 2.0);
    printf("the value of 5/2 is %d\n", 5 / 2);
    printf("the value of 5/2 is %f\n", (float)5 / 2);

    int a = (float)(4);
    printf("the value of a is %d\n", a);
    int b = 3.5;
    printf("the value of b is %d\n", b); // here the value of b is assigned as 3.5 but is printing as 3 because its declared in int
    int k = 3.0 / 9;
    printf("the value of k is %f", 3.0 / 9);
    return 0;
}