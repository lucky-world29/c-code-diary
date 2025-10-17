#include <stdio.h>
#include <stdlib.h>  // for abs()

int main() {
    int num1, num2, gcd = 1;
    printf("Enter two integer numbers: ");
    scanf("%d%d", &num1, &num2);

    // Take absolute values
    num1 = abs(num1);
    num2 = abs(num2);

    // Handle the case when both are zero
    if (num1 == 0 && num2 == 0) {
        printf("GCD is undefined (both numbers are 0)\n");
        return 0;
    }

    int i = 1;
    int min = (num1 < num2) ? num1 : num2;

    while (i <= min) {
        if ((num1 % i == 0) && (num2 % i == 0)) {
            gcd = i;
        }
        i++;
    }

    printf("GCD is %d\n", gcd);
    return 0;
}
