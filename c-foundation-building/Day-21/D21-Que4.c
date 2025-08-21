//
// Created by abina on 21-08-2025.
//
#include<stdio.h>
int main() {
    int num,reverse=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0) {
        int last_digit = num % 10;
        // reverse = reverse *10 +last_digit;
        printf("%d \n",last_digit);
        num = num / 10;
    }
   // printf("Reversed number = %d ", reverse);
}