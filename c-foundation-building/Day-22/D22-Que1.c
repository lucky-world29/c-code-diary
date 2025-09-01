//
// Created by abina on 22-08-2025.
//

//Neon number
#include<stdio.h>
int main() {
    int num,sum=0,square,digit;
    printf("Enter a number:");
    scanf("%d",&num);

    square=num*num;

    while(square>0) {
        digit=square%10;
        sum=sum+digit;
        square=square/10;
    }
    if(sum==num) {
        printf("Neaon");
    }else {
        printf("Not neon");
    }

}