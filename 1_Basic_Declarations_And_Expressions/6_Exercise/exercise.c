#include <stdio.h>

#define PI 3.14

int main(void)
{
      // Exercise 6
      // Write a C program to compute the perimeter and area of a circle with a given radius.

      int radius;

      printf("Enter Circle Radius --> ");
      scanf("%d", &radius);

      printf("\n");

      printf("Circle Perimeter --> %f\n", 2 * PI * radius);
      printf("Circle Area --> %f\n", PI * radius * radius);
      return 0;
}