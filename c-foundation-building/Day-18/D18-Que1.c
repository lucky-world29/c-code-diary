//
// Created by abina on 18-08-2025.
//
/**
* Write a C program to print N natural numbers in reverse order using simple if and goto statments.

Sample input : 5
Sample Output : 5 4 3 2 1

Sample input : 7
Sample Output : 7 6 5 4 3 2 1

Sample input : -5
Sample Output : Invalid Input.

Sample input : 0
Sample Output : Invalid Input.

---------------------------
 */

#include<stdio.h>
int main() {
 int input;
 printf("Enter  ur input");
 scanf("%d",&input);
//
 if (input == 0 || input < 0) {
  printf("Invalid input");
  return 0;
 }
 //
 start :
if (input>0) {
 printf("%d ",input); // while printing always try to use %d
 input--;
 goto start;
}



}