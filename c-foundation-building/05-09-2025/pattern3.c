//
// Created by abina on 05-09-2025.
//
#include<stdio.h>
int main() {
    for (int row=1;row<=5;row++) {
        for (int col=1;col<=5;col++) {
            if (col==1 || col==row || row==5)
                printf("%3d",col);
            else
                printf("   ");
        }
        printf("\n");
    }
}



// #include<stdio.h>
// int main() {
//     int i, j;
//
//     for(i=1;i<=5;i++) {
//         for(j=1;j<=i;j++) {
//             if (j==1||j==i||i==5)
//                 printf("%2d",j);
//             else printf("  ");
//         }
//         printf("\n");
//     }
//
//
// }