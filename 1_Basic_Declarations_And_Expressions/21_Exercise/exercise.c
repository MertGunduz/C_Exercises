#include <stdio.h>

int main(void)
{
      // Exercise 21
      // Write a C program that swaps two numbers without using third variable

      int x = 50;
      int y = 100;

      printf("|-------------|\n");
      printf("| BEFORE SWAP |\n");
      printf("|-------------|\n\n");

      printf("X --> %d\nY --> %d\n\n", x, y);

      x = x + y;
      y = x - y;
      x = x - y;

      printf("|------------|\n");
      printf("| AFTER SWAP |\n");
      printf("|------------|\n\n");
      printf("X --> %d\nY --> %d\n", x, y);

      return 0;
}