#include <stdio.h>

int main(void)
{
      // Exercise 20
      // Write a C program to read an array of length 6 and find the smallest element and its position.

      int arr[6];
      int smallestNumber;

      for (int i = 0; i < 6; i++)
      {
            printf("Enter %d. Value --> ", i + 1);
            scanf("%d", &arr[i]);
            
            printf("\n");
      }

      smallestNumber = arr[0];

      for (int i = 0; i < 5; i++)
      {
            if (smallestNumber > arr[i])
            {
                  smallestNumber = arr[i];
            }
      }

      printf("Smalles Number --> %d\n", smallestNumber);

      return 0;
}