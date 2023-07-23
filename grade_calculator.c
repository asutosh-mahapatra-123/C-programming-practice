#include <stdio.h>

int main()
{
    int sub1, sub2, sub3;
    float average;
    char grade;
    printf("enter your marks of 3 subjects\n");
    scanf("%d%d%d", &sub1, &sub2, &sub3);
    if (sub1 > 100 || sub2 > 100 || sub3 > 100 || sub1 < 0 || sub2 < 0 || sub3 < 0)
    {
        printf("please input valid mark between 0 to 100");
        return 0;
    }
    average = (float)(sub1 + sub2 + sub3) / 3.0;

    if (average >= 90)
        grade = 'O';

    else if (average >= 80)
        grade = 'E';
    else if (average >= 70)
        grade = 'A';
    else if (average >= 60)
        grade = 'B';
    else if (average >= 50)
        grade = 'C';
    else if (average >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("the  avg grade of the student is %c", grade);
}
