//
// Created by abina on 04-09-2025.
//


/*
             5
            654
           76543
          8765432
         987654321
 */
#include<stdio.h>
int main() {
    for(int row=1;row<=5;row++) {
        for(int col=1;col<=9;col++) {
            if(col==5&&row==5) {
                printf("%3d",row);
            }
            else {
                printf("%3d%3d",col,row);
            }
        }
        printf("\n");
    }
}

/*
* #include <stdio.h>

int main() {
    int odd = 3;  // starting odd number after 1
    printf("       1\n");                  // Row 1
    printf("    3   8   5\n");             // Row 2 (fixed as per given pattern)

    // Row 3: generate based on rules
    printf(" ");

    // print left side odd numbers
    printf("%d  %d", odd, odd+2);
    odd += 4;

    // print middle number = 8 * 5
    int mid = 8 * 5;
    printf("  %d", mid);

    // print right side odd numbers
    printf("  %d  %d", odd, odd+2);

    printf("\n");

    return 0;
}

 */