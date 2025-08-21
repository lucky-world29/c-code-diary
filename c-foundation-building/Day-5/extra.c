#include<stdio.h>
int main(){
    int year;


    scanf("%d",&year);

    if(year>2)
        printf("Not Eligible ");
    else if(year>=2 || year <4)
        printf("10 %% bonus");
    else if(year>=5 || year <9)
        printf("15 %% bonus");
    else if(year>=10)
        printf("15 %% bonus");


}