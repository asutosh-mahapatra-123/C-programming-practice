#include <stdio.h>

void main()
{
    int start, end, iter;

    printf("please enter starting number");
    scanf("%d", &start);
    printf("please enter the ending num");
    scanf("%d", &end);
    printf("pleasa enter the iteration no");
    scanf("%d", &iter);

    do
    {
        printf("%d\n", start);
        start += iter;

    } while (start <= end);
    printf("end of do while loop");
}