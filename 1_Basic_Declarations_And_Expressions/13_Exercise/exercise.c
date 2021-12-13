#include <stdio.h>

int main(void)
{
      // Exercise 13
      // Write a C program that reads an integer between 1 and 12 and print the month of the year in English.

      int monthCount;

      do 
      {
            printf("Enter Month Number --> ");
            scanf("%d", &monthCount);
      } while(monthCount < 1 || monthCount > 12);

      if (monthCount == 1)
      {
            printf("January");
      }
      else if (monthCount == 2)
      {
            printf("February");
      }
      else if (monthCount == 3)
      {
            printf("March");
      }
      else if (monthCount == 4)
      {
            printf("April");
      }
      else if (monthCount == 5)
      {
            printf("May");
      }
      else if (monthCount == 6)
      {
            printf("June");
      }
      else if (monthCount == 7)
      {
            printf("July");
      }
      else if (monthCount == 8)
      {
            printf("August");
      }
      else if (monthCount == 9)
      {
            printf("September");
      }
      else if (monthCount == 10)
      {
            printf("October");
      }
      else if (monthCount == 11)
      {
            printf("November");
      }
      else if (monthCount == 12)
      {
            printf("December");
      }

      return 0;
}