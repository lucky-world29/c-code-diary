//
// Created by abina on 29-08-2025.
//
#include<stdio.h>
int main() {
    int number,fact=1;
    scanf("%d",&number);

    for (int i=number;i>1;i--) {
    fact=fact*i;
    }
    printf("Factorial of %d is %d",number,fact);
}