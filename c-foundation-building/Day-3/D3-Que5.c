//
// Created by abina on 04-08-2025.
//
// Que 5 :  Write a 'C' program to reverse the given 3 digit number without using control statments.
// --------
//
// Sample input : int a = 123;
// Sample Output : reverse =  321

#include<stdio.h>
int main() {
    int number;
    int rev =0;
    printf("Enter the number = ");
    scanf("%d",&number);

    rev = number%10 * 100 + number/10 % 10 * 10 + number/100;
    printf("reverse = %d",rev);
}