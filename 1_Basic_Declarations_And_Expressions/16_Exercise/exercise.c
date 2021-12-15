#include <stdio.h>

int main(void)
{
      // Exercise 16
      // Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers.

      int firstNumber;
      int secondNumber;
      int thirdNumber;
      int fourthNumber;
      int fifthNumber;

      int positiveNumbers = 0;
      int negativeNumbers = 0;

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
            positiveNumbers++;
      }
      else {
            negativeNumbers++;
      }

      if (secondNumber >= 0)
      {
            positiveNumbers++;
      }
      else 
      {
            negativeNumbers++;
      }
      
      if (thirdNumber >= 0)
      {
            positiveNumbers++;
      }
      else {
            negativeNumbers++;
      }

      if (fourthNumber >= 0)
      {
            positiveNumbers++;
      }
      else 
      {
            negativeNumbers++;
      }

      if (fifthNumber >= 0)
      {
            positiveNumbers++;
      }
      else 
      {
            negativeNumbers++;
      }

      printf("Positive Numbers --> %d\n", positiveNumbers);
      printf("Negative Numbers --> %d\n", negativeNumbers);
      return 0;
}