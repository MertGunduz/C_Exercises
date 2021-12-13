#include <stdio.h>

int main(void) 
{
      // Exercise 8 
      //  Write a C program to convert specified days into years, months, weeks and days.
      
      int years;
      int months;
      int weeks;
      int days;

      printf("Enter Days --> ");
      scanf("%d", &days);

      printf("\n");

      years = days / 365;
      days = days - (365 * years);

      months = days / 30;
      days = days - (30 * months);

      weeks = days / 7;
      days = days - (7 * weeks);

      printf("Years --> %d\nMonths --> %d\nWeeks -->%d\nDays --> %d\n", years, months, weeks, days);
      return 0;
} 