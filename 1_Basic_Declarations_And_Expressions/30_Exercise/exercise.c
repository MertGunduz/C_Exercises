#include <stdio.h>

int main(void)
{
      // Exercise 30
      // Write a C program which reads an integer and count every digit in the given number.

      int number;

      int zeroRepeat = 0;
      int oneRepeat = 0;
      int twoRepeat = 0;
      int threeRepeat = 0;
      int fourRepeat = 0;
      int fifeRepeat = 0;
      int sixRepeat = 0;
      int sevenRepeat = 0;
      int eighthRepeat = 0;
      int nineRepeat = 0;

      printf("Enter Number --> ");
      scanf("%d", &number);

      printf("\n");

      while (number != 0)
      {
            if (number % 10 == 0)
            {
                  zeroRepeat++;
            }
            else if (number % 10 == 1)
            {
                  oneRepeat++;
            }
            else if (number % 10 == 2)
            {
                  twoRepeat++;
            }
            else if (number % 10 == 3)
            {
                  threeRepeat++;
            }
            else if (number % 10 == 4)
            {
                  fourRepeat++;
            }
            else if (number % 10 == 5)
            {
                  fifeRepeat++;
            }
            else if (number % 10 == 6)
            {
                  sixRepeat++;
            }
            else if (number % 10 == 7)
            {
                  sevenRepeat++;
            }
            else if (number % 10 == 8)
            {
                  eighthRepeat++;
            }
            else if (number % 10 == 9)
            {
                  nineRepeat++;
            }

            number = number / 10;
      }

      printf("Repeat (0) --> %d\n", zeroRepeat);
      printf("Repeat (1) --> %d\n", oneRepeat);
      printf("Repeat (2) --> %d\n", twoRepeat);
      printf("Repeat (3) --> %d\n", threeRepeat);
      printf("Repeat (4) --> %d\n", fourRepeat);
      printf("Repeat (5) --> %d\n", fifeRepeat);
      printf("Repeat (6) --> %d\n", sixRepeat);
      printf("Repeat (7) --> %d\n", sevenRepeat);
      printf("Repeat (8) --> %d\n", eighthRepeat);
      printf("Repeat (9) --> %d\n", nineRepeat);

      return 0;
}