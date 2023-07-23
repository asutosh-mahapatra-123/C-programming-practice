// wap to convert centegrade to farehnite
// formula > f = 9/5*c + 32

#include <stdio.h>

void main()
{
    float cius, farenhite;
    printf("please give the data in cius\n");
    scanf("%f", &cius);

    farenhite = (9.0 / 5 * cius) + 32;
    printf("the ans is %f", farenhite);
}