#include <stdio.h> 

int main(void) 
{
      // Exercise 4
      // Define a char array named userName. And take the value from the user by using scanf() function. Then write Hello userName.

      char userName[20];

      printf("Name --> ");
      scanf("%s", userName);

      printf("\n");

      printf("Hello %s!", userName); 
      return 0;
} 