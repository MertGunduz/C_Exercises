#include <stdio.h>

int main(void)
{
      // Exercise 29
      // Write a C program which reads an integer and count number of 3s in the given number.
      
      int number;
      int repeat = 0;

      printf("Enter Number --> ");
      scanf("%d", &number);

      printf("\n");

      while (number != 0)
      {
            if (number % 10 == 3 )
            {
                  repeat++;
            }

            number = number / 10;
      }

      printf("Repeats --> %d\n", repeat);
      return 0;
}