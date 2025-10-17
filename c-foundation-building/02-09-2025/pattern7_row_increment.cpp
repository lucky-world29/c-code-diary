//
// Created by abina on 02-09-2025.
//
/*#include<stdio.h>
int main() {
    int k=1;
    for (int row=1;row<=5;row++) {
         k=row;
        for (int col=1;col<=5;col++) {
            printf("%3d",k);
            k++;
        }
        printf("\n");
        // k++;
    }
}*/

#include <stdio.h>

int main() {
    int n=5,i,j;//11
    for(i = 1;i<=n;i++) {  //  i =2
        int k = i; // 3
        for(j = 1;j<=n;j++) { //  5 times
            printf("%3d",k++); //1 2 3 4 5
        }                           //2 3 4 5 6
        printf("\n");
    }

    return 0;
}