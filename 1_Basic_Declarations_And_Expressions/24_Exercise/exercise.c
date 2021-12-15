#include <stdio.h>

int main(void)
{
      // Exercise 24 
      // Write a C program to create enumerated data type for 7 days and display their values in integer constants.

      enum week  
      {
            Sunday,
            Monday,
            Tuesday,
            Wednesday,
            Thursday,
            Friday,
            Saturday
      };

      printf("Sunday --> %d\n", Sunday);
      printf("Monday --> %d\n", Monday);
      printf("Tuesday --> %d\n", Tuesday);
      printf("Wednesday --> %d\n", Wednesday);
      printf("Thursday --> %d\n", Thursday);
      printf("Friday --> %d\n", Friday);
      printf("Saturday --> %d\n", Saturday);
      return 0;
}