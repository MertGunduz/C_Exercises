#include <stdio.h>

int main(void)
{
      // Exercise 28
      // Write a C program that tells the number palindrome or not.

      int inputNumber;
      int comparisonNumber;
      int reversedNumber = 0;

      printf("Enter Number --> ");
      scanf("%d", &inputNumber);

      printf("\n");

      comparisonNumber = inputNumber;

      while (inputNumber >= 1)
      {
            reversedNumber = inputNumber % 10 + reversedNumber * 10;
            inputNumber = inputNumber / 10;
      }

      if (comparisonNumber == reversedNumber)
      {
            printf("|----------------------|\n");
            printf("| Number Is Palindrome |\n");
            printf("|----------------------|\n");
      }

      return 0;
}