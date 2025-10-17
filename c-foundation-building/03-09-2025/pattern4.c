//
// Created by abina on 03-09-2025.
//

#include <stdio.h>
int main() {
    for (char row = 'A'; row <= 'E'; row++) {   // row starts from A, B, C...
        char ch = row;                          // start each line with row letter

        for (int col = 1; col <= 5; col++) {
            printf("%3c", ch++);
        }

        printf("\n");
    }
    return 0;
}