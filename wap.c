// wap a programm to chcck wheater a number is divisible by 97 ot not

#include <stdio.h>
void main()
{
    int num;
    printf("please enter a number ");
    scanf("%d", &num);

    if (num % 97 == 0) // or can write if(num/97)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}