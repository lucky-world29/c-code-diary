//
// Created by abina on 02-09-2025.
//
#include<stdio.h>
int main() {
    for (int row = 1;row<=5;row++ ) {
        for (int col = 1;col<=3;col++ ) {
            printf("%3d%3d",col,row);
        }
        printf("\n");
    }
}