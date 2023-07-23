#include <stdio.h>

void main()
{
    int num, i, iter;

    printf("enter the starting number");
    scanf("%d", &num);
    printf("please enter the ending number");
    scanf("%d", &i);
    printf("enter the iteration no.");
    scanf("%d", &iter);

    while (num <= i)
    {
        printf("%d\n", num);
        num += iter;
    }
    printf("end of while loop");
}
