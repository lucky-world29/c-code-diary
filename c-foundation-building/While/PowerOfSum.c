//
// Created by abina on 06-09-2025.
//

// 2^5 = 2^1 + 2^2 + 2^3 + 2^4 +2^5 == 2 + 4 + 8 + 16 + 32 = 62


#include<stdio.h>
int main() {
    int base,power,sum=0;
    long result = 1;
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the power: ");
    scanf("%d",&power);

    while(power>=1) {
        result = result * base;
        sum = sum + result;
        power--;
    }
    printf("Factorial of %d is: %d",base,sum);
}