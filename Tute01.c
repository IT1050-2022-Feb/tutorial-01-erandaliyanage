/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int sub1,sub2,total=0;
  float avg;

  printf("Enter Marks Subject one :");
  scanf("%d",&sub1);
  printf("Enter Marks Subject two :");
  scanf("%d",&sub2);

  total=sub1+sub2;
   
   avg=(float)total/2;

   printf("Average Marks is %2.f",avg);
  
  return 0;
}

