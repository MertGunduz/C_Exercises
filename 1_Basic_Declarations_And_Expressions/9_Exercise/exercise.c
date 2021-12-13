#include <stdio.h>

int main(void)
{
      // Exercise 9 
      // Write a C program that calculates the average weight of the two items (float-numbers).

      float firstItemWeight;
      float secondItemWeight;

      printf("Enter First Item Weight --> ");
      scanf("%f", &firstItemWeight);

      printf("\n");

      printf("Enter Second Item Weight --> ");
      scanf("%f", &secondItemWeight);

      printf("\n");

      printf("Average Weight --> %f", (firstItemWeight + secondItemWeight) / 2);
      return 0; 
}