// while loop

#include <stdio.h>

void main()
{
    int i = 1, j = 1, k = 1;

    while (i <= 20)
    {
        printf("%d\n", i);
        i = i + j;

        j = j + k;
        k++;
    }
    printf("while loop ended");
}
