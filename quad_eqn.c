#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, D, x;
    printf(" enter the value:");
    scanf("%d%d%d", &a, &b, &c);
    D = sqrt(b * b - 4 * a * c);
    if (D > 0)
    {
        x = b + sqrt(D) / 2 * a;
        x = b - sqrt(D) / 2 * a;
        printf("real roots");
    }
    else if (D < 0)
    {
        printf("imaginary roots");
    }
    else
    {
        printf("equal");
    }
}
