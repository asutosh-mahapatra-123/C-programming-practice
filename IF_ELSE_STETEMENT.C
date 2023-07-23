#include <stdio.h>

int main()
{
    int age;
    printf("please enter ur age\n");
    scanf("%d", &age);

    if (age <= 80 && age >= 18)
    {
        printf("you can drive\n");
    }
    else
        printf("you cannot drive\n");
    return 0;
}