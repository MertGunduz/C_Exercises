#include <stdio.h>

int main(void)
{
      // Exercise 25
      // Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number.

      int number;
      int digitResult = 0;

      do 
      {
            printf("Enter Number --> ");
            scanf("%d", &number);

            printf("\n");
      } while(number > 500 || number < 0);

      while (number >= 1)
      {
            digitResult += number % 10;
            number = number / 10;
      }

      printf("%d", digitResult);
      return 0;
}