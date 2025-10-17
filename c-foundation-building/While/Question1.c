//
// Created by abina on 05-09-2025.
//


// 1 to n number sum and find average

#include<stdio.h>
int main() {
    int number,sum=0;
    printf("Enter a number: ");
    scanf("%d",&number);

    if (number<0) {
        printf("Number must be greater than zero\n");
        return 0;
    }

    int temp=number;
    while(number!=0) {
        sum=sum+number;
        number--;
    }
    printf("sum is %d\n",sum);
    printf("Average is %.2f\n",(float)sum/temp);
}