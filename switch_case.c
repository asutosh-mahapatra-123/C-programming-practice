#include <stdio.h>

void main()
{
    int rating;

    printf("please enter ur rating(1-5)\n");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("your rating is 1\n");
        break;                              // its used to exit the statement
    case 2:
        printf("your rating is 2\n");
        break;

    case 3:
        printf("your rating is 3\n");
        break;
    case 4:
        printf("your rating is 4\n");
        break;
    case 5:
        printf("your rating is 5\n");
        break;
    default:
        printf("invalid rating!");
        break;
    }
}