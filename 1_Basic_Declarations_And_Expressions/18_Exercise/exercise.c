#include <stdio.h>

int main(void)
{
      // Exercise 18
      // Write a C program to read and print the elements of an array of length 7, before print, put the triple of the previous position starting from the second position of the array. For example, if the first number is 2, the array numbers must be 2, 6, 18, 54 and 162.

      int arr[5];
      int arrLength = sizeof(arr) / 5;
      int startingNumber;

      printf("Starting Number --> ");
      scanf("%d", &startingNumber);

      printf("\n");

      for (int i = 0; i <= arrLength; i++)
      {
            arr[i] = startingNumber;
            printf("%d. Element Of Array --> %d\n", i, arr[i]);

            startingNumber = startingNumber * 3;
      }

      return 0;
}