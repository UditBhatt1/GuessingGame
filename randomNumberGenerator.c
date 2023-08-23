#include "./randomNumberGenerator.h"
int numberGenerator()
{
    srand(time(NULL));
    int randomNumber = rand() % 11;
    return randomNumber;
}