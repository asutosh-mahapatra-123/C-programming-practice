#include <stdio.h>

void main()
{
    int num_of_star = 1, i = 1, temp;
    printf("please enter the no. of stars in one line");
    scanf("%d", &num_of_star);

    while (i <= num_of_star)
    {
        while (1 <= num_of_star)
        {
            printf("* ");
            num_of_star--;
        }
        temp = num_of_star;
        i++;
    }
}
