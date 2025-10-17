//
// Created by abina on 05-09-2025.
//

// 4! = 4*3*2*1

#include<stdio.h>
int main() {
    int number,fact=1;
    int temp;
    printf("Enter a number: ");
    scanf("%d",&number);

    temp=number;
    while (number>0) {
        fact=fact*number;
        number--;
    }
    printf("Factorial of %d is: %d",temp,fact);
}