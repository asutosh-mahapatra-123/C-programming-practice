#include <stdio.h>
// 0+ 2+4+6+8+10
void main()
{
    int a, ans = 1, i = 1;
    printf("enetr a num.");
    scanf("%d", &a);

    while (i <= a)
    {
        ans = ans * i;
        printf("%d\n", ans);
        i = i + 2;
    }
    printf("%d", ans);
}