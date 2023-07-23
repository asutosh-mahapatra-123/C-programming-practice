#include <stdio.h>
void main()
{
    int start_num = 1, end_num, no_of_line, temp, j = 1;
    temp = start_num;
    printf("enter the starting num.\n");
    printf("please enter ending num.\n");
    printf("please enter the no. of lines\n");

    scanf("%d%d", &start_num, &end_num);
    scanf("%d", &no_of_line);
    while (j <= no_of_line)
    {
        while (temp <= end_num)
        {
            printf("%d ", temp);
            temp++;
        }

        temp = start_num;
        printf("\n");
        j++;
    }
}