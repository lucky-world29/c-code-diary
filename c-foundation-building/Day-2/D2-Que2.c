//
// Created by abina on 01-08-2025.
//
//Even odd without using ternary operator and control statements

#include <stdio.h>
int main() {
    int a ;
    printf("Enter a nummber");
    scanf("%d",&a);
    int b;
    b = (a%2==1);
    char *arr[2] = {"EVEN","ODD"};
    printf("%s",arr[b]);

    return 0;
}