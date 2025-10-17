//
// Created by abina on 03-09-2025.
//
#include<stdio.h>
int main() {

    for (int row=1;row<=5;row++) {
            int temp_row=row; // here the row value is safe we keep use the temp_row value
        for (int col=1;col<=4;col++) {
            printf("%3d",temp_row);
            temp_row+=5;
        }
        printf("\n");
    }
}