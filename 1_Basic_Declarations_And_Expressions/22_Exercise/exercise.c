#include <stdio.h>

int main(void)
{
      // Exercise 22
      // Write a C program to reverse and print a given number.

      int regularNumber;
      int reversedNumber = 0;

      printf("Enter Number --> ");
      scanf("%d", &regularNumber);

      printf("\n");

      while (regularNumber >= 1)
      {
            reversedNumber = (reversedNumber * 10) + (regularNumber % 10);
            regularNumber = regularNumber / 10;
      }

      printf("Reversed Number --> %d", reversedNumber);
      return 0;
}