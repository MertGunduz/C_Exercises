#include <stdio.h>

int main(void)
{
      // Exercise 26
      // Write a C program that prints out the prime numbers between 1 and 200. The output should be such that each row contains a maximum of 10 prime numbers.

      int repeat = 4;

      printf("-2- -3- -5- -7- ");

      for (int i = 10; i <= 200; i++)
      {

            if (repeat == 10)
            {
                  printf("\n");
                  repeat = 0;
            }

            if (i % 2 != 0 & i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
            {
                  printf("-%d- ", i);
                  repeat++;
            }
      }

      return 0;
}