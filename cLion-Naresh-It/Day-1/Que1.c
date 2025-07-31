//
// Created by abina on 31-07-2025.
//

#include <stdio.h>
int main() {
    // printf("Hello Wordl");

    int a,b;
    int add,sub,mul,div,mod;

    printf("Enter the 1st number ");
    scanf("%d",&a);
    printf("Enter the 2nd number ");
    scanf("%d",&b);

    add = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    mod = a%b;

    printf("Addition  is %d \n" , add);
    printf("Substraction   is %d \n" , sub);
    printf("Multiplication  is %d \n" , mul);
    printf("Division  is %d \n" , div);
    printf("Modulo  is %d \n" , mod);


}