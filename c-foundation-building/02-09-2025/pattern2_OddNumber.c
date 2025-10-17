//
// Created by abina on 02-09-2025.
//
//
// Created by abina on 02-09-2025.
//
#include<stdio.h>
int main() {
    int k=1;
    for (int row =1; row <= 5; row++) {
        for (int column = 1; column <= 5; column++) {
            printf("%3d",k);
            k+=2;
        }
        printf("\n");
    }
}