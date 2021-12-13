#include <stdio.h>

int main(void)
{
      // Exercise 10
      // Write a C program that calculates the average of the 3 exams.

      float firstExam;
      float secondExam;
      float project;

      printf("First Exam --> ");
      scanf("%f", &firstExam);

      printf("\n");

      printf("Second Exam --> ");
      scanf("%f", &secondExam);
      
      printf("\n");

      printf("Project --> ");
      scanf("%f", &project);

      printf("\n");

      printf("Average Of Exams & Project --> %f", (firstExam + secondExam + project) / 3);
      return 0;
}