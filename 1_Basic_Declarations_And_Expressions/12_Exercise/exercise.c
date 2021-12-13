#include <stdio.h>

int main(void)
{
      // Exercise 12
      // Write a C program that read 5 numbers and sum of all odd values between them.

      int firstNumber;
      int secondNumber;
      int thirdNumber;
      int fourthNumber;
      int fifthNumber;

      int totalResult = 0;

      printf("First Number --> ");
      scanf("%d", &firstNumber);

      printf("\n");

      printf("Second Number --> ");
      scanf("%d", &secondNumber);

      printf("\n");

      printf("Third Number --> ");
      scanf("%d", &thirdNumber);

      printf("\n");

      printf("Fourth Number --> ");
      scanf("%d", &fourthNumber);

      printf("\n");

      printf("Fifth Number --> ");
      scanf("%d", &fifthNumber);

      printf("\n");

      if (firstNumber % 2 == 1)
      {
            printf("First Number Is Odd!\n");
            totalResult += firstNumber;
      }

      if (secondNumber % 2 == 1)
      {
            printf("Second Number Is Odd!\n");
            totalResult += secondNumber;
      }

      if (thirdNumber % 2 == 1)
      {
            printf("Third Number Is Odd!\n");
            totalResult += thirdNumber;
      }

      if (fourthNumber % 2 == 1)
      {
            printf("Fourth Number Is Odd!\n");
            totalResult += fourthNumber;
      }

      if (fifthNumber % 2 == 1)
      {
            printf("Fifth Number Is Odd!\n");
            totalResult += fifthNumber;
      }

      printf("\n");

      printf("Result --> %d\n", totalResult);
      return 0;
}