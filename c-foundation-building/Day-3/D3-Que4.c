//
// Created by abina on 04-08-2025.
//

// Que 4 :  Write a 'C' program to check and print the Maximum number among
// two numbers without using ternary operator and control statments.
// --------
//
// Sample input : int a = 10 , b = 20
// Sample Output : MAX = 20

#include<stdio.h>
int main() {
    int a , b;
    printf("Enter the 1st number");
    scanf("%d",&a);
    printf("Enter the 2nd number");
    scanf("%d",&b);

    (a>b)&&printf("MAX is %d",a);
    (a<b)&&printf("MAX is %d",b);
}