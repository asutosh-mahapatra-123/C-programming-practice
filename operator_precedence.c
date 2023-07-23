#include <stdio.h>

int main()
{
    int x = 4, y = 5;
    printf("the value of 4*x - 5*y is %d\n", 4 * x - 5 * y);
    printf("the value of 4*x - 5*y is %d\n", 4 * (x - 5 * y));
    // operators of higher priority are  evaluated first in the absence of parenthesis() .
    // but in presence of parenthesis its priority is not maintained.
    int a = 2, b = 3;
    printf("the value of 8*b / 3*a is: %d", 8 * b / 3 * a); // its wrong it must be 24/6
    // this is because its working according to its precedance order not accord to the  BODMAS RULE
    // it follows left to right order * / %
    // 8*3/3*2
    // 24/3*2  left to right orders
    // 8*2
    // 16 ans
    char dt = '2 '; // invalid here the charater variable must only contain 1 num/char , space is not valid
    return 0;
}
