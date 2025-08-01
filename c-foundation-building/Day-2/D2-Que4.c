//
// Created by abina on 02-08-2025.
//
#include<stdio.h>
int main() {
    int hour,minute,second;
    printf("Enter the seconds =  ");
    scanf("%d", &second);

    hour = second/3600;
    second = second%3600;

    minute = second/60;
    second = second%60;
    printf("%d hours %d minutes %d second \n", hour, minute,second);
}