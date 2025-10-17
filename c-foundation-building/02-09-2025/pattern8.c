//
// Created by abina on 02-09-2025.
//
#include<stdio.h>
int main() {
    int k;
    for (int row = 5; row >=1; row--) {
        k=row;
        for (int col = 1; col <= 5; col++) {
            printf("%3d",k);
            k+=5;
        }
        printf("\n");
    }
}