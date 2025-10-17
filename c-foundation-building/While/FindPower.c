#include <stdio.h>
int main() {
    int base, power, temp;
    double result = 1; // use double for fractions

    printf("Enter the number: ");
    scanf("%d", &base);

    printf("Enter the power: ");
    scanf("%d", &power);

    temp = power;

    if (power > 0) {
        while (power > 0) {
            result = result * base;
            power--;
        }
    } 
    else if (power < 0) {
        power = -power; // make it positive
        while (power > 0) {
            result = result * base;
            power--;
        }
        result = 1.0 / result; // reciprocal
    } 
    else {
        result = 1; // base^0 = 1
    }

    printf("%d ^ %d = %.2lf\n", base, temp, result);

    return 0;
}
