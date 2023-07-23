/*
write a programme to multiply 2 numbers by taking inpts from user
*/

#include <stdio.h>
void main()
{
    int input1;
    int input2;
    scanf("%d", &input1);
    scanf("%d", &input2);
    int ans = input1 * input2;

    // printf("%d", &input2);
    printf("multiplication of %d and %d is %d", input1, input2, ans);
}