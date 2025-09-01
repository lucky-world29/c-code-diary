//
// Created by abina on 26-08-2025.
//
#include <iso646.h>
#include<stdio.h>
int main() {
    // 5 => 2 3 5 7 11
    //7 =>2 3 5 7 11 13 17
    //....
    int n ,x=0;
    printf("Enter numner");
    scanf("%d",&n);
    for (int i=2;x<n;i++) { // let i =5
        int count =0;
        for (int j=1;j<=i;j++) {
            if (i%j==0) count++; //2
        }
        if (count==2) {
            printf("%d ",i); // 2 3 5 7 11
            x++;
        }
    }
}