#include <stdio.h>

int main(void)
{
      // Exercise 15
      // Write a C program that prints all even numbers between 1 and 50 (inclusive)

      for (int i = 0; i <= 50; i++)
      {
            if (i % 2 == 0)
            {
                  printf("%d\n", i);
            }
      }
}