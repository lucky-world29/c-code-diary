//
// Created by abina on 26-08-2025.
//
#include <stdio.h>
int main() {
    int n=5,x=1,sum=0;
    for (int i=1;i<=n;i++) {
        if (i==n)
            printf("%d",x);
        else
            printf("%d+",x);

       sum+=x;
        x=x*10+1;
    }
    printf("\n sum =  %d",sum);
}