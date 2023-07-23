#include <stdio.h>

int main()
{
    int a, b = 10;
    printf("please enter a number\n");
    scanf("%d", &a);
    // one liner
    // condition ? expression if true : expression if false

    a >= b ? printf("its true") : printf(" its false");
    return 0;
}