// //
// // Created by abina on 29-08-2025.
// //
// /*
// * Ques - 1
// --------------
// A Strong Number is a number in which the sum of the factorial of its digits equals the number itself.
//
// Example:
//
// 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
// 2 = 2! = 2
//
// 40585 = 4! + 0! + 5! + 8! + 5! = 40585
// Check the given number is strong number or not by using nested while loop.
// Example :
// Input as : 145
// Output as : 145 is a strong number.
//
// Example :
// Input as : 125
// Output : 125 is not a strong number.
//
//
#include <stdio.h>

int main() {
    int number, digit, temp, fact, sum = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    temp = number;

    while (temp > 0) {
        digit = temp % 10;
        fact = 1;

        int i = 1;
        while (i <= digit) {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == number) {
        printf("%d is a Strong Number.\n", number);
    } else {
        printf("%d is not a Strong Number.\n", number);
    }

    return 0;
}