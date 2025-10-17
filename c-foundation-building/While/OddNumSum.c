//
// Created by abina on 05-09-2025.
//
#include<stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    int sum_Even=0;
    int sum_Odd=0;
    printf("\n");
    while (number>=1) {

        if (number%2==0)
            sum_Even=sum_Even+number;
        else
            sum_Odd=sum_Odd+number;
        number--;
    }
    printf("Sum Even = %d\n",sum_Even);
    printf("Sum Odd = %d\n",sum_Odd);
}