//
// Created by abina on 22-08-2025.
//
#include<stdio.h>
int main() {
    int number,square;
    printf("Enter a number: ");
    scanf("%d",&number);
    square=number*number;

    while(number!=0) {
        if (number%10 != square%10 ) {
            printf("Not An Automorpic Number ");
            return 0;
        }
        number = number/10;
        square= square/10;
    }
    printf("Automorpic Number ");
}