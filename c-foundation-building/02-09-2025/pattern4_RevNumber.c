//
// Created by abina on 02-09-2025.
//
#include<stdio.h>
int main() {
    for (int row=1;row<=4;row++) {
        for (int col=5;col>=1;col--) {
            printf("%3d",col);
        }
        printf("\n");
    }
}