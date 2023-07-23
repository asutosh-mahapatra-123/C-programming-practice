#include <stdio.h>
void main()
{
    int num;
    printf("vale of num?");
    scanf("%d", &num);
    do
    {
        printf("the value  of the number :%d\n", num);

        if (num == 5)
        {
            break; // here this breeak statement is used to break the statemant from here
                   // whether the condition is satisfied yet or not
        }          // but if we will enter  6 then it will print from 6 to 20
        num++;
    } while (num <= 20);
}