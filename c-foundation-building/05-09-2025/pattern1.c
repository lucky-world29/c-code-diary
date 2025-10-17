//
// Created by abina on 05-09-2025.
//

#include<stdio.h>
int main() {
    for (int  row=1;row<=5;row++) {
        for (int  col=1;col<=5;col++) {
            if (row+col<6)
                printf("%3d",0);
            else
                printf("%3d",1);
        }
        printf("\n");
    }
}

