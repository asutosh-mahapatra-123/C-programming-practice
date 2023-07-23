#include<stdio.h>
void main()
{
    // prime no is a num greater than 1 and which cant be multiplied by any other num
#include <stdio.h>

    int isPrime(int num)
    {
        int i;

        // 0 and 1 are not prime numbers
        if (num == 0 || num == 1)
            return 0;

        // Check if num is divisible by any number from 2 to num/2
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
                return 0; // Not a prime number
        }

        return 1; // Prime number
    }

    int main()
    {
        int num;

        printf("Enter a number: ");
        scanf("%d", &num);

        if (isPrime(num))
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);

        return 0;
    }
}