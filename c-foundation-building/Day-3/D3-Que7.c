    //
    // Created by abina on 04-08-2025.
    //
    // Ques 7
    // ------------
    //   Write a 'C' program to check and print the Maximum number among three numbers
    //   using ternary operator.
    //
    // Sample input : int a = 10 , b = 200, c = 134;
    // Sample Output : MAX = 200
    //
    // Sample input : int a = 300 , b = 200, c = 134;
    // Sample Output : MAX = 300
    //
    // Sample input : int a = 300 , b = 300, c = 300;
    // Sample Output : All are same


#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter the 1st number");
    scanf("%d",&a);
    printf("Enter the 2nd number");
    scanf("%d",&b);
    printf("Enter the 3rd number");
    scanf("%d",&c);

    (a>b && a>c ) ? printf("Max is %d",a):(b>a&&b>c) ?
    printf("Max is %d",b):(c>a&&c>b) ? printf("Max is %d",c) : printf("All are same");

}