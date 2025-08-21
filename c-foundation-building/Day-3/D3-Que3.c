//
// Created by abina on 04-08-2025.
//

// Ques - 3
// ---------------------
// Write a 'C' program to check and print that given number is even or odd
// without using ternary operator and control statments.
// --------
//
// Sample input : int a = 10
// Sample Output : EVEN
//
// Sample input : int a = 125
// Sample Output : ODD


#include<stdio.h>
int main() {
    int number;
    printf("Enter the number ");
    scanf("%d",&number);

    number%2==0&&printf("even")||printf("odd");

}