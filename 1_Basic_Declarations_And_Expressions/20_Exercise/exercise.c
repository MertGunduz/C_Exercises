#include <stdio.h>

int main(void)
{
      // Exercise 20
      // Write a C program to read an array of length 6 and find the smallest element and its position.

      int arr[6];
      int smallestNumber;
      int position;

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
                  position = i;
            }
      }

      printf("Smallest Number --> %d\nPosition --> %d\n", smallestNumber, position);

      return 0;
}