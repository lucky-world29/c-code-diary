//
// Created by abina on 31-07-2025.
//
#include<stdio.h>
int main(){
    int a =5,b=5,c=10;

    printf("(%d == %d) && (%d > %d) is %d \n",a,b,c,b, (a==b)&&(c>b));
    printf("(%d == %d) && (%d < %d) is %d \n",a,b,c,b,(a==b)&&(c<b));
    printf("(%d == %d) || (%d < %d) is %d \n",a,b,b,b,(a==b)||(c<b));
    printf("(%d != %d) || (%d < %d) is %d \n",a,b,c,b,(a!=b||(c<b)));
    printf("!(%d != %d) is %d  \n",a,b,!(a != b));
    printf("!(%d == %d) is %d  ",a,b,!(a == b));



}