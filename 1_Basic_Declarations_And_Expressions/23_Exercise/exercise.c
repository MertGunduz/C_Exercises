#include <stdio.h>

int main(void)
{
      // Exercise 23
      // Write a C program that accepts 4 real numbers from the keyboard and print out the difference of the maximum and minimum values of these four numbers.
      
      float arr[4];

      float smallestNumber;
      float biggestNumber;

      for (int i = 0; i < 4; i++)
      {
            printf("Enter %d. Value --> ", i + 1);
            scanf("%f", &arr[i]);

            printf("\n");
      }

      smallestNumber = arr[0];
      biggestNumber = arr[0];

      for (int i = 0; i < 4; i++)
      {
            if (smallestNumber > arr[i])
            {
                  smallestNumber = arr[i];
            }
      }
      
      for (int i = 0; i < 4; i++)
      {
            if (biggestNumber < arr[i])
            {
                  biggestNumber = arr[i];
            }
      }

      printf("Result --> %f", biggestNumber - smallestNumber);

      return 0;
}