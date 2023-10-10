// take a number from the user and find its cube

#include <stdio.h>

void main()
{
    int n, cube;
    printf("please enter a number n \n");

    scanf("%d", &n);

    cube = n * n * n;
    printf("the cube is %d", cube);
}