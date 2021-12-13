#include <stdio.h>

int main(void)
{
      // Exercise 8
      // Write a C program that accepts two integers from the user and calculate the sum of the two integers.

      int firstNumber;
      int secondNumber;

      printf("First Number --> ");
      scanf("%d", &firstNumber);

      printf("\n");

      printf("Second Number --> ");
      scanf("%d", &secondNumber);

      printf("\n");

      printf("Sum Of These 2 Values --> %d\n", firstNumber + secondNumber);
      return 0;
}