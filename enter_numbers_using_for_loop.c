#include <stdio.h>

void main()
{
    int a1, a2;

    printf("please input 2 numbers: ");
    scanf("%d%d", &a1, &a2);

    for (; a1 <= a2; a1++)
    {
        printf("the number is: %d\n", a1);
    }

    printf("thanks for using the program");
}
