// wap to build a calculator

#include <stdio.h>
int main()
{
    int a;
    int b;
    char operation[10];
    float ans;
    printf("please input 1st number \n");
    scanf("%d", &a);
    printf("please input 2nd number \n");
    scanf("%d", &b);
    printf("please input the operation you want to do \n");
    scanf(" %s", operation);

    if (operation == "+")
    {
        ans = a + b;
    }
    else if (operation == "-")
    {
        ans = a - b;
    }
    else if (operation == "*")
    {
        ans = a * b;
    }
    else if (operation == "/")
    {
        ans = a / b;
    }
    else
    {
        printf("invalid operation choosen");
        return 0;
    }

    printf(" ans is %d", ans);
}