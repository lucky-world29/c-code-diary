//
// Created by abina on 18-08-2025.
//

/*
* Write a C program to print all EVEN numbers from 1 to given N number using simple if and goto statments.

Sample input : 10
Sample Output : 2 4 6 8 10

Sample input : 5
Sample Output : 2 4

Sample input : -5
Sample Output : Invalid Input.

Sample input : 0
Sample Output : Invalid Input.

---------------------------
 */

#include <stdio.h>
int main() {
 printf("Enter the number u want to print even number from 1");

 int num,i=1;
 scanf("%d",&num);

 if(num <=0) {
  printf(" Invalid Input.");
  return 0;
 }

 printf("1 to %d even number are  =>  ",num);
 start :
 if (i<num) {  //i because we need some variable to control the iteration with goto
  if (i%2==0) {
   printf("%d \t",i);
  }
  i++;
  goto start;
 }

}