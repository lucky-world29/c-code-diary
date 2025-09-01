//
// Created by abina on 22-08-2025.
//
#include<stdio.h>
int main() {
    int x;
    switch (scanf("%d",&x)) {
        case 0: printf("Inside case 0");break;
            case 1: printf("Inside case 1");break;
            default:printf("DEfallt");
    }
    return 0;
}