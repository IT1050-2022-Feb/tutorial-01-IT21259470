/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  //variable declaration and initialitation
  int mark1, mark2, sum=0;
  float average=0;

  printf("Enter marks for Subject 1: ");
  scanf("%d", &mark1); // get user input
  printf("Enter marks for Subject 2: ");
  scanf("%d", &mark2); // get user input

  sum = mark1 + mark2;// Calculate sub total of two marks
  average = sum/2.0;// Calculate average mark

  printf("Average mark is %.2f", average);
  
  return 0;
}

