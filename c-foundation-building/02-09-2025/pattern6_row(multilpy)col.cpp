//
// Created by abina on 02-09-2025.
//
#include<stdio.h>
int main() {
    for(int row = 1; row <= 5; row++){
        for(int col = 1; col <= 5; col++){
            printf("%3d",row*col);
        }
        printf("\n");
    }
}