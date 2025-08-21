//
// Created by abina on 04-08-2025.
//

// Que 1 : Write a 'C' program to take the marks of a student in 5 subjects
// as input and determine how many subjects have marks greater than or equal to 35
// and how many have marks less than 35.
// ------- The program should not use any control statements (if, else, switch, etc.) or the ternary operator.
//
// Sample input  : int sub1 = 38, sub2 = 34, sub3 = 35, sub4 = 78, sub5 = 20
//
// Sample Output : Pass in 3 subject and fail in 2 subject.

#include<stdio.h>
int main() {
    int sub1,sub2,sub3,sub4,sub5;
    int pass=0;
    int fail=0;
    printf("Enter the mark of sub1 ");
    scanf("%d",&sub1);

    printf("Enter the mark of sub2 ");
    scanf("%d",&sub2);

    printf("Enter the mark of sub3 ");
    scanf("%d",&sub3);

    printf("Enter the mark of sub4 ");
    scanf("%d",&sub4);

    printf("Enter the mark of sub5 ");
    scanf("%d",&sub5);

    (sub1>=35)&&(pass++);
    (sub1<35)&&(fail++);

    (sub2>=35)&&(pass++);
    (sub2<35)&&(fail++);

    (sub3>=35)&&(pass++);
    (sub3<35)&&(fail++);

    (sub4>=35)&&(pass++);
    (sub4<35)&&(fail++);

    (sub5>=35)&&(pass++);
    (sub5<35)&&(fail++);

    printf("Pass in %d subject and fail in %d subject.",pass,fail);
}

/*
* //
// Created by abina on 04-08-2025.
//

// Que 1 : Write a 'C' program to take the marks of a student in 5 subjects
// as input and determine how many subjects have marks greater than or equal to 35
// and how many have marks less than 35.
// ------- The program should not use any control statements (if, else, switch, etc.) or the ternary operator.
//
// Sample input  : int sub1 = 38, sub2 = 34, sub3 = 35, sub4 = 78, sub5 = 20
//
// Sample Output : Pass in 3 subject and fail in 2 subject.

#include<stdio.h>
int main() {
    int sub1,sub2,sub3,sub4,sub5;
    int pass=0;
    int fail=0;
    printf("Enter the mark of sub1 ");
    scanf("%d",&sub1);

    printf("Enter the mark of sub2 ");
    scanf("%d",&sub2);

    printf("Enter the mark of sub3 ");
    scanf("%d",&sub3);

    printf("Enter the mark of sub4 ");
    scanf("%d",&sub4);

    printf("Enter the mark of sub5 ");
    scanf("%d",&sub5);

    (sub1>=35)&&(++pass) || (fail++);
    (sub1<35)&&(++fail);

    (sub2>=35)&&(++pass) ;
    (sub2<35)&&(++fail);

    (sub3>=35)&&(++pass);
    (sub3<35)&&(++fail);

    (sub4>=35)&&(++pass);
    (sub4<35)&&(++fail);

    (sub5>=35)&&(++pass);
    (sub5<35)&&(++fail);

    printf("Pass in %d subject and fail in %d subject.",pass,fail);
}
 */