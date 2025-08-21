//
// Created by abina on 21-08-2025.
//
#include<stdio.h>
int main() {
    int num;
    long factorial=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The factorial of %d is: ",num);
    while(num!=0) {
        factorial = factorial * num;
        num --;
    }
    printf(" %ld",factorial);
}