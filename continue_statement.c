#include <stdio.h>
void main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
            continue; // here 6 is skipped and others are printed
        printf("%d\n", i);
    }
}