#include <stdio.h>

void main()
{
    int _1num, _2num;
    printf("please enter ur starting number\n");
    scanf("%d", &_1num);
    printf("please enter ur ending num\n");
    scanf("%d", &_2num);

    while (_1num <= _2num) // num1 > num2 ----> will create an infinite loop if we enter num1 greater than 2
    {
        printf("%d\n", _1num);
        _1num++;
    }
    printf("your program is over");
}