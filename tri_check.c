// Enter the three sides of a triangle. WAP to check whether those sides form a valid triangle or not (triangle is valid if sum of the two sides is greater than the largest of the three sides).

#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Please enter value of 3 sides of a triangle:\n");
    scanf("%d%d%d", &side1, &side2, &side3);
    if (((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side2 + side3) > side1))
    {
        printf("It is a valid Trigle.\n");
    }
    else
        printf("It is not a valid Triangle.\n");
    return 0;
}
