#include <stdio.h>
void main()
{
    char ch;
    printf("please enter a character\n");
    scanf("%c", &ch);
    if (ch >= 'A' && ch >= 'Z')
    {
        ch = ch + 32;
    }
    else
        ch = ch - 32;
    printf("%c", ch);
}