#include <stdio.h>
#include <stdlib.h> // for creating random number
#include <time.h>

void main()
{
    int number, guess, nguesses = 0;
    srand(time(0));
    number = rand() % 100 + 1; // it generates a random number btwn 0 and 100
    // printf("the number is %d\n", number); ----> it will show the random number

    do
    {
        printf("guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("BOOYAH!\nYou guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    printf("thanks for using the programm");
}