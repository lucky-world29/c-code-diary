//
// Created by abina on 21-08-2025.
//
#include <stdio.h>
int main() {
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num!=0) {
        num /= 10;
        count++;
    }
    printf("Count of digit  = %d", count);
}