#include <stdlib.h>
#include <stdio.h>
#include "./randomNumberGenerator.h"

int main(int argc, char **argv)
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