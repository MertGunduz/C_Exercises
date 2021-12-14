#include <stdio.h>

int main(void)
{
      // Exercise 14
      // Write a C program that read 5 numbers and counts the number of positive numbers and print the average of all positive values.

      int firstNumber;
      int secondNumber;
      int thirdNumber;
      int fourthNumber;
      int fifthNumber;

      int repeat = 0;
      float average = 0;

      printf("First Number --> ");
      scanf("%d", &firstNumber);

      printf("\n");

      printf("Second Number --> ");
      scanf("%d", &secondNumber);

      printf("\n");

      printf("Third Number --> ");
      scanf("%d", &thirdNumber);

      printf("\n");

      printf("Fourth Number --> ");
      scanf("%d", &fourthNumber);

      printf("\n");

      printf("Fifth Number --> ");
      scanf("%d", &fifthNumber);

      printf("\n");

      if (firstNumber >= 0)
      {
            repeat++;
            average += firstNumber;
      }
      else if (secondNumber >= 0)
      {
            repeat++;
            average += firstNumber;
      }
      else if (thirdNumber >= 0)
      {
            repeat++;
            average += firstNumber;
      }
      else if (fourthNumber >= 0)
      {
            repeat++;
            average += firstNumber;
      }
      else if (fifthNumber >= 0)
      {
            repeat++;
            average += firstNumber;
      }

      average = average / repeat;

      printf("Average Of Positive Numbers --> %f", average);
      return 0;
}