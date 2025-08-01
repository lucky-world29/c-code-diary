//
// Created by abina on 01-08-2025.
//

#include<stdio.h>
int main() {
 int number;
 printf("Enter a number: ");
 scanf("%d",&number);

 if (number%10<5)
  printf("%d",(number/10)*10 );
 else
  printf("%d",(number/10+1)*10);
}