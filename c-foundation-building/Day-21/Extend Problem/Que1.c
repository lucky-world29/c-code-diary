//
// Created by abina on 21-08-2025.
//
#include<stdio.h>
int main() {
    int number,max=0,digit;
    printf("Enter the number");
    scanf("%d",&number);

    while (number!=0) {
        digit = number % 10;
        max = max > digit ? max : digit;  //digit ? max : digit
        number = number / 10;
    }
    printf("Highest digit is %d",max);
}