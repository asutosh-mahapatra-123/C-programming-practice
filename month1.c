#include <stdio.h>
void main()
{
    int mn, year;
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month number(Ex-1 for Janary.)");
    scanf("%d", &mn);
    switch (mn)
    {
    case 1:
        printf("It is January and it consist of 31 days.");
        break;
    case 2:
        if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        {
            printf("It is February and it consist of 29 days.");
            break;
        }
        else
        {
            printf("It is February and it consist of 28 days.");
            break;
        }
    case 3:
        printf("It is March and it consist of 31 days.");
        break;
    case 4:
        printf("It is April and it consist of 30 days.");
        break;
    case 5:
        printf("It is May and it consist of 31 days.");
        break;
    case 6:
        printf("It is June and it consist of 30 days.");
        break;
    case 7:
        printf("It is July and it consist of 31 days.");
        break;
    case 8:
        printf("It is August and it consist of 31 days.");
        break;
    case 9:
        printf("It is September and it consist of 30 days.");
        break;
    case 10:
        printf("It is October and it consist of 31 days.");
        break;
    case 11:
        printf("It is November and it consist of 30 days.");
        break;
    case 12:
        printf("It is December and it consist of 31 days.");
        break;
    }
}