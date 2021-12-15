#include <stdio.h>

int main(void)
{
      // Exercise 17
      // Write a C program that reads an integer and find all its divisor.

      int inputNumber;
      int repeat = 0;

      printf("Enter Number --> ");
      scanf("%d", &inputNumber);

      printf("\n");

      for (int i = 1; i <= inputNumber; i++)
      {
            if (inputNumber % i == 0)
            {
                  repeat++;
                  printf("%d. Divisor --> %d\n", repeat, i);
            }
      }
      return 0;
}