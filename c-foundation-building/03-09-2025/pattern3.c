//
// Created by abina on 03-09-2025.
//
#include <stdio.h>
int main() {
    char ch='A';
    for (int row=1;row<=5;row++) { //
        for (int col=1;col<=4;col++) { //
            printf("%3c",ch++);
        }
        printf("\n");
    }
}