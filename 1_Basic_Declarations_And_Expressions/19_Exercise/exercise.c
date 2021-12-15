#include <stdio.h>

int main(void)
{
      // Exercise 19
      // Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5.

      int arr[5];

      for (int i = 0; i < 5; i++)
      {
            printf("Enter %d. Value --> ", i + 1);
            scanf("%d", &arr[i]);

            printf("\n");
      }

      for (int i = 0; i < 5; i++)
      {
            if (arr[i] < 5)
            {
                  printf("Array[%d] = %d\n", i, arr[i]);
            }
      }

      return 0;
}