// WAP to check whether a given year is a leap year or not.
#include <stdio.h>

int main()
{
    int year;

    printf("Please enter a year:\n");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("Its a leap year");
    else
        printf("Its not a leap year");
    return 0;
}