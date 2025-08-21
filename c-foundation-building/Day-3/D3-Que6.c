//
// Created by abina on 04-08-2025.
//
// Ques 6:
// -----------
// Write a 'C' program to check and print the minimum number among two numbers  using ternary operator.
// --------
//
// Sample input : int a = 10 , b = 200
// Sample Output : Min = 100

#include<stdio.h>
int main() {
    int a ,b;
    printf("Enter the 1st number");
    scanf("%d",&a);
    printf("Enter the 2nd number");
    scanf("%d",&b);

    (a>b) ? printf("Min is %d",b) : printf("Min is %d",a);

}