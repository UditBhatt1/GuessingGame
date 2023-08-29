#include "./randomNumberGenerator.h"
int numberGenerator()
{
    srand(time(NULL));               // fetching current time
    int randomNumber = rand() % 101; // divide by max + 1
    return randomNumber;
}

void guessingGame()
{
    int randomNumber = numberGenerator(); // generating random number (0-100)
    int input;
    int steps = 1;

    printf("Guess a number between 0 and 100: ");
    scanf("%d", &input); // taking input

    // testing the input
    while (input != randomNumber)
    {
        steps += 1;

        if (input < 0)
            printf("Number cannot be negative");

        if (input < randomNumber)
        {
            printf("Too small \nTry again:");
        }
        else if (input > randomNumber)
        {
            printf("Too big \n Try again: ");
        }
        scanf("%d", &input);
    }
    printf("\nYay, You guessed it correct in %d steps", steps);
}
