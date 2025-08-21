//
// Created by abina on 21-08-2025.
//
#include <stdio.h>
int main() {
    int number,sum=0,digit;
    printf("Enter an Integer ");

    scanf("%d", &number);
    while(number!=0) {
        digit=number%10;
        sum=sum+digit;
        number=number/10;

    }
    printf("Sum = %d", sum);
}