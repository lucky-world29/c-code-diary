//
// Created by abina on 03-09-2025.
//
#include<stdio.h>
int main() {
    int k=1,n=5;// n = 5 bcz 5 rows and 5 columns it will varry

    for (int row=1; row<=5; row++) {
        for (int col=1; col<=5; col++) {
            if (row%2!=0)
                printf("%3d",k++);
            else
                printf("%3d",--k);
        }
        k+=n;
        printf("\n");
    }
}