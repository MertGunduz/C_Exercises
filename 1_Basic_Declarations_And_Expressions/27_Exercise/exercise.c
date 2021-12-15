#include <stdio.h>

int main(void)
{
      // Exercise 27
      // Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints square using hash (#) character.

      for (int i = 1; i <= 100; i++)
      {
            printf("# ");
            
            if (i % 10 == 0 )
            {
                  printf("\n");
            }
      }

      return 0;
}