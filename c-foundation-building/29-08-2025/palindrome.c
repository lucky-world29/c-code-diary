//
// Created by abina on 29-08-2025.
//

// 111 -111 || 121 - 121 || 17371-17371





#include<stdio.h>
int main() {
    long temp,number,rev=0;
    printf("Enter a number: ");
    scanf("%ld", &number);

    while (number!=0) {
        int r = number % 10; // ??
        rev = rev * 10 + r;
        number = number / 10;
    }
    printf(temp==rev?"Pallindrome":"NO");
}