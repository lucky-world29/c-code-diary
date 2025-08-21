#include<stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5,sum=0,per_age;
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);

    sum = sub1+sub2+sub3+sub4+sub5;
    printf("%d",sum);
    per_age = sum/5;
    printf("%d",per_age);

    switch (per_age) {
        case 90 : printf("A");
                        break;
        case 75 : printf("B");
            break;
            case 50 : printf("C");
            break;
            case 35 : printf("D");
            break;
            default:
            printf("%d is fail u idiot",per_age);
    }

}