/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float num1,num2,tot;

  printf("Enter number 1:");
  scanf("%f", &num1);
  printf("Enter number 2:");
  scanf("%f", &num2);
  tot=num1+num2;

  printf("Total:%.2f", tot);

  
  return 0;
}

