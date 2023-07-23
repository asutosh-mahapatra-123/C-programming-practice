#include <stdio.h>
void main()
{
    int i, j;
    float f;
    i = 12;
    j = 5;
    i = (double)i;
    f = i / j;

    printf("%f", f);
}