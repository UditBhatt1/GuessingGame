#include "./randomNumberGenerator.h"
int numberGenerator()
{
    srand(time(NULL));
    int randomNumber = rand() % 101;
    return randomNumber;
}

void guessingGame()
{
    int randomNumber = numberGenerator();
    int input;
    printf("Guess the number: ");
    scanf("%d", &input);

    while (input != randomNumber)
    {
        if (input < randomNumber)
        {
            printf("Too small");
            printf("\nTry again: ");
            scanf("%d", &input);
        }
        else if (input > randomNumber)
        {
            printf("Too big");
            printf("\nTry again: ");
            scanf("%d", &input);
        }
    }
    if (input == randomNumber)
    {
        printf("Yay! You guessed it correct");
    }
}