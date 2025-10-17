//
// Created by abina on 02-09-2025.
//
#include<stdio.h>
int main() {
    int k=2;
    for (int row=1;row<=4;row++) {
        for (int col=1;col<=5;col++) {
            printf("%3d",k);
            k+=2;
        }
        printf("\n");
    }
}