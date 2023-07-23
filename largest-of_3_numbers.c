#include <stdio.h>

int main()
{
    int a, b, c, largest;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = a; // Assume 'a' is the largest initially

    if (b > largest)
    {
        largest = b; // If 'b' is greater than current largest, update largest
    }

    if (c > largest)
    {
        largest = c; // If 'c' is greater than current largest, update largest
    }

    printf("The largest number is %d\n", largest);

    return 0;
}
