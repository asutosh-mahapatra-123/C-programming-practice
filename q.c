// WAP to calculate the gross salary of an employee. If basic < 1500 then hra= 75%
// of the basic, da = 80 % of the basic.Otherwise hra = 85 % of the basic, da = 87 % of the basic.

// gs = basic + hra

#include <stdio.h>

void main()
{
    float basic_salary, hra, gross_salary;
    printf("Please input the basic salary");
    scanf("%f", &basic_salary);
    if (basic_salary < 1500)
    {
        hra = 75.0 / 100 * basic_salary;
    }
    else
    {
        hra = 85.0 / 100 * basic_salary;
    }

    gross_salary = basic_salary + hra;

    printf("gross salary is %f", gross_salary);
}
