#include<stdio.h>
int main() {
    printf("Enter number ");
    int num,i=1;
    scanf("%d",&num);
start:
    if (i<num) {
        if (i%2!=0) {
            printf("%d \t",i);
        }
        i++;
        goto start;
    }

}